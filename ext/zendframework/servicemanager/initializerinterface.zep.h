
extern zend_class_entry *zendframework_servicemanager_initializerinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_ServiceManager_InitializerInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_servicemanager_initializerinterface_initialize, 0, 0, 2)
	ZEND_ARG_INFO(0, instance)
	ZEND_ARG_OBJ_INFO(0, serviceLocator, ZendFramework\\ServiceManager\\ServiceLocatorInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_servicemanager_initializerinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_ServiceManager_InitializerInterface, initialize, arginfo_zendframework_servicemanager_initializerinterface_initialize)
  PHP_FE_END
};