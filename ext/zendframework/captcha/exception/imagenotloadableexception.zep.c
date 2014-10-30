
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/
/**
 * Exception for Zend\Form component.
 */
ZEPHIR_INIT_CLASS(ZendFramework_Captcha_Exception_ImageNotLoadableException) {

	ZEPHIR_REGISTER_CLASS_EX(Zend\\Captcha\\Exception, ImageNotLoadableException, zendframework, captcha_exception_imagenotloadableexception, zendframework_captcha_exception_runtimeexception_ce, NULL, 0);

	zend_class_implements(zendframework_captcha_exception_imagenotloadableexception_ce TSRMLS_CC, 1, zendframework_captcha_exception_exceptioninterface_ce);
	return SUCCESS;

}

