
extern zend_class_entry *zendframework_mvc_router_console_routeinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Mvc_Router_Console_RouteInterface);

ZEPHIR_INIT_FUNCS(zendframework_mvc_router_console_routeinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Mvc_Router_Console_RouteInterface, getAssembledParams, NULL)
  PHP_FE_END
};
