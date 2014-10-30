
extern zend_class_entry *zendframework_inputfilter_emptycontextinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_InputFilter_EmptyContextInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_inputfilter_emptycontextinterface_setcontinueifempty, 0, 0, 1)
	ZEND_ARG_INFO(0, continueIfEmpty)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_inputfilter_emptycontextinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_InputFilter_EmptyContextInterface, setContinueIfEmpty, arginfo_zendframework_inputfilter_emptycontextinterface_setcontinueifempty)
	PHP_ABSTRACT_ME(ZendFramework_InputFilter_EmptyContextInterface, continueIfEmpty, NULL)
  PHP_FE_END
};
