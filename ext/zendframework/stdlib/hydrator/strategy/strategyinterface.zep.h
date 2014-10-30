
extern zend_class_entry *zendframework_stdlib_hydrator_strategy_strategyinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Stdlib_Hydrator_Strategy_StrategyInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_stdlib_hydrator_strategy_strategyinterface_extract, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_stdlib_hydrator_strategy_strategyinterface_hydrate, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_stdlib_hydrator_strategy_strategyinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_Strategy_StrategyInterface, extract, arginfo_zendframework_stdlib_hydrator_strategy_strategyinterface_extract)
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_Strategy_StrategyInterface, hydrate, arginfo_zendframework_stdlib_hydrator_strategy_strategyinterface_hydrate)
  PHP_FE_END
};
