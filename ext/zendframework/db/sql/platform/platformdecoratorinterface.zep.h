
extern zend_class_entry *zendframework_db_sql_platform_platformdecoratorinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Db_Sql_Platform_PlatformDecoratorInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_db_sql_platform_platformdecoratorinterface_setsubject, 0, 0, 1)
	ZEND_ARG_INFO(0, subject)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_db_sql_platform_platformdecoratorinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Db_Sql_Platform_PlatformDecoratorInterface, setSubject, arginfo_zendframework_db_sql_platform_platformdecoratorinterface_setsubject)
  PHP_FE_END
};
