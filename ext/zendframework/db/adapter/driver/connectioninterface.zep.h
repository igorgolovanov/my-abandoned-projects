
extern zend_class_entry *zendframework_db_adapter_driver_connectioninterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Db_Adapter_Driver_ConnectionInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_db_adapter_driver_connectioninterface_execute, 0, 0, 1)
	ZEND_ARG_INFO(0, sql)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_db_adapter_driver_connectioninterface_getlastgeneratedvalue, 0, 0, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_db_adapter_driver_connectioninterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, getCurrentSchema, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, getResource, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, connect, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, isConnected, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, disconnect, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, beginTransaction, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, commit, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, rollback, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, execute, arginfo_zendframework_db_adapter_driver_connectioninterface_execute)
	PHP_ABSTRACT_ME(ZendFramework_Db_Adapter_Driver_ConnectionInterface, getLastGeneratedValue, arginfo_zendframework_db_adapter_driver_connectioninterface_getlastgeneratedvalue)
  PHP_FE_END
};
