
extern zend_class_entry *zendframework_stdlib_hydrator_hydratoroptionsinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Stdlib_Hydrator_HydratorOptionsInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_stdlib_hydrator_hydratoroptionsinterface_setoptions, 0, 0, 1)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_stdlib_hydrator_hydratoroptionsinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_Hydrator_HydratorOptionsInterface, setOptions, arginfo_zendframework_stdlib_hydrator_hydratoroptionsinterface_setoptions)
  PHP_FE_END
};
