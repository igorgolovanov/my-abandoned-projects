
extern zend_class_entry *zendframework_modulemanager_feature_logprocessorproviderinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_ModuleManager_Feature_LogProcessorProviderInterface);

ZEPHIR_INIT_FUNCS(zendframework_modulemanager_feature_logprocessorproviderinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_ModuleManager_Feature_LogProcessorProviderInterface, getLogProcessorConfig, NULL)
  PHP_FE_END
};