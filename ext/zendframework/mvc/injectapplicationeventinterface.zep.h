
extern zend_class_entry *zendframework_mvc_injectapplicationeventinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Mvc_InjectApplicationEventInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mvc_injectapplicationeventinterface_setevent, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, event, ZendFramework\\EventManager\\EventInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_mvc_injectapplicationeventinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Mvc_InjectApplicationEventInterface, setEvent, arginfo_zendframework_mvc_injectapplicationeventinterface_setevent)
	PHP_ABSTRACT_ME(ZendFramework_Mvc_InjectApplicationEventInterface, getEvent, NULL)
  PHP_FE_END
};
