
extern zend_class_entry *zendframework_stdlib_hydrator_namingstrategyenabledinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Stdlib_Hydrator_NamingStrategyEnabledInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_stdlib_hydrator_namingstrategyenabledinterface_setnamingstrategy, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, strategy, ZendFramework\\Stdlib\\Hydrator\\NamingStrategy\\NamingStrategyInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_stdlib_hydrator_namingstrategyenabledinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_NamingStrategyEnabledInterface, setNamingStrategy, arginfo_zendframework_stdlib_hydrator_namingstrategyenabledinterface_setnamingstrategy)
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_NamingStrategyEnabledInterface, getNamingStrategy, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_NamingStrategyEnabledInterface, hasNamingStrategy, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_NamingStrategyEnabledInterface, removeNamingStrategy, NULL)
  PHP_FE_END
};
