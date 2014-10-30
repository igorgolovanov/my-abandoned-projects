
#ifdef HAVE_CONFIG_H
#include "../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../php_ext.h"
#include "../../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/
ZEPHIR_INIT_CLASS(ZendFramework_Db_Sql_Platform_PlatformDecoratorInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\Db\\Sql\\Platform, PlatformDecoratorInterface, zendframework, db_sql_platform_platformdecoratorinterface, zendframework_db_sql_platform_platformdecoratorinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(ZendFramework_Db_Sql_Platform_PlatformDecoratorInterface, setSubject);
