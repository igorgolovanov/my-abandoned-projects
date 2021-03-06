<?php

/*
 * This file is part of the YiiImage package.
 *
 * (c) Igor Golovanov <igor.golovanov@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/**
 * Image driver which based on GD extension.
 * 
 * @author  Igor Golovanov <igor.golovanov@gmail.com>
 */
class YiiImageGdDriver extends YiiImageDriver
{

    /**
     * {@inheritDoc}
     */
    public $provider = array(
        'class' => 'ext.yii-image.gd.YiiImageGdProvider',
    );

    /**
     * {@inheritDoc}
     */
    public $font = array(
        'class' => 'ext.yii-image.gd.YiiImageGdFont',
    );

    /**
     * Info.
     * 
     * @var array
     */
    private $info;

    /**
     * Types.
     * 
     * @var array
     */
    private $types = array(
        IMAGETYPE_GIF      => 'gif',
        IMAGETYPE_JPEG     => 'jpeg',
        IMAGETYPE_JPEG2000 => 'jpeg',
        IMAGETYPE_PNG      => 'png',
        IMAGETYPE_UNKNOWN  => 'unknown',
        IMAGETYPE_WBMP     => 'wbmp',
        IMAGETYPE_XBM      => 'xbm'
    );

    /**
     * Construct.
     * 
     * @throws RuntimeException 
     */
    public function __construct()
    {
        if (!function_exists('gd_info')) {
            throw new RuntimeException('Gd not installed');
        }
        if (version_compare(GD_VERSION, '2.0.1', '<')) {
            throw new RuntimeException('GD2 version 2.0.1 or higher is required');
        }
        $this->info = gd_info();
    }

    /**
     * {@inheritDoc}
     */
    protected function doCreate(YiiImageBox $size, YiiImageColor $color = null)
    {
        $resource = imagecreatetruecolor($size->width, $size->height);

        if (false === $resource) {
            throw new RuntimeException('Create operation failed');
        }

        $color = $color ? $color : new YiiImageColor('fff');

        if (false === imagealphablending($resource, false) ||
                false === imagesavealpha($resource, true)) {
            throw new RuntimeException(
                    'Could not set alphablending, savealpha and antialias values'
            );
        }

        if (function_exists('imageantialias')) {
            imageantialias($resource, true);
        }

        $index = imagecolorallocatealpha(
                $resource, $color->getRed(), $color->getGreen(),
                $color->getBlue(), round(127 * $color->getAlpha() / 100)
        );

        if (false === $index) {
            throw new RuntimeException('Unable to allocate color');
        }

        if (false === imagefill($resource, 0, 0, $index)) {
            throw new RuntimeException('Could not set background color fill');
        }

        if ($color->getAlpha() >= 95) {
            imagecolortransparent($resource, $index);
        }

        return $this->getProviderInstance($resource);
    }

    /**
     * {@inheritDoc}
     */
    protected function doLoad($string)
    {
        $resource = imagecreatefromstring($string);

        if (!is_resource($resource)) {
            throw new InvalidArgumentException('An image could not be created from the given input');
        }

        if (false === imagealphablending($resource, false) ||
                false === imagesavealpha($resource, true)) {
            throw new RuntimeException(
                    'Could not set alphablending, savealpha and antialias values'
            );
        }

        if (function_exists('imageantialias')) {
            imageantialias($resource, true);
        }

        return $this->getProviderInstance($resource);
    }

    /**
     * {@inheritDoc}
     */
    protected function doOpen($path)
    {
        if (!is_file($path)) {
            throw new InvalidArgumentException(sprintf(
                            'File %s doesn\'t exist', $path
            ));
        }

        $info = getimagesize($path);

        if (false === $info) {
            throw new RuntimeException('Could not collect image metadata');
        }

        list($width, $height, $type) = $info;

        $format = $this->types[$type];

        $supported = array(
            'gif'  => 'GIF Read Support',
            'jpeg' => 'JPEG Support',
            'png'  => 'PNG Support',
            'wbmp' => 'WBMP Support',
            'xbm'  => 'XBM Support'
        );

        if (!$this->info[$supported[$format]]) {
            throw new RuntimeException(sprintf(
                            'Installed version of GD doesn\'t support "%s" image format',
                            $format
            ));
        }

        if (!function_exists('imagecreatefrom' . $format)) {
            throw new InvalidArgumentException(
                    'Invalid image format specified, only "gif", "jpeg", "png", ' .
                    '"wbmp", "xbm" images are supported'
            );
        }

        $resource = call_user_func('imagecreatefrom' . $format, $path);

        if (!imageistruecolor($resource)) {
            // create transparent truecolor canvas
            $truecolor   = imagecreatetruecolor($width, $height);
            $transparent = imagecolorallocatealpha($truecolor, 255, 255, 255,
                                                   127);

            imagefill($truecolor, 0, 0, $transparent);
            imagecolortransparent($truecolor, $transparent);

            imagecopymerge($truecolor, $resource, 0, 0, 0, 0, $width, $height,
                           100);

            imagedestroy($resource);
            $resource = $truecolor;
        }

        if (!is_resource($resource)) {
            throw new RuntimeException(sprintf(
                            'File "%s" could not be opened', $path
            ));
        }

        if (false === imagealphablending($resource, false) ||
                false === imagesavealpha($resource, true)) {
            throw new RuntimeException(
                    'Could not set alphablending, savealpha and antialias values'
            );
        }

        if (function_exists('imageantialias')) {
            imageantialias($resource, true);
        }

        return $this->getProviderInstance($resource);
    }

    /**
     * {@inheritDoc}
     */
    protected function doRead($resource)
    {
        if (!is_resource($resource)) {
            throw new InvalidArgumentException('Variable does not contain a stream resource');
        }

        return $this->doLoad(stream_get_contents($resource));
    }

    /**
     * {@inheritDoc}
     */
    protected function doFont($file, $size, YiiImageColor $color)
    {
        if (!$this->info['FreeType Support']) {
            throw new RuntimeException('GD is not compiled with FreeType support');
        }
        return $this->getFontInstance($file, $size, $color);
    }

}
