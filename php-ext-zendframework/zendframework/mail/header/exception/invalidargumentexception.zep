/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Mail\Header\Exception;

use Zend\Mail\Exception;

class InvalidArgumentException extends Exception\InvalidArgumentException implements
    ExceptionInterface
{}