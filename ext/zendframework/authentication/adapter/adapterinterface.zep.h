
extern zend_class_entry *zendframework_authentication_adapter_adapterinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Authentication_Adapter_AdapterInterface);

ZEPHIR_INIT_FUNCS(zendframework_authentication_adapter_adapterinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Authentication_Adapter_AdapterInterface, authenticate, NULL)
  PHP_FE_END
};
