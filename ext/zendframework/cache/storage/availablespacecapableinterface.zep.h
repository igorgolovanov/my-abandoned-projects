
extern zend_class_entry *zendframework_cache_storage_availablespacecapableinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Cache_Storage_AvailableSpaceCapableInterface);

ZEPHIR_INIT_FUNCS(zendframework_cache_storage_availablespacecapableinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Cache_Storage_AvailableSpaceCapableInterface, getAvailableSpace, NULL)
  PHP_FE_END
};
