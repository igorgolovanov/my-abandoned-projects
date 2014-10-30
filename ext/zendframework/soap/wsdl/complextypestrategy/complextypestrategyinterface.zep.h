
extern zend_class_entry *zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Soap_Wsdl_ComplexTypeStrategy_ComplexTypeStrategyInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_setcontext, 0, 0, 1)
	ZEND_ARG_INFO(0, context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_addcomplextype, 0, 0, 1)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Soap_Wsdl_ComplexTypeStrategy_ComplexTypeStrategyInterface, setContext, arginfo_zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_setcontext)
	PHP_ABSTRACT_ME(ZendFramework_Soap_Wsdl_ComplexTypeStrategy_ComplexTypeStrategyInterface, addComplexType, arginfo_zendframework_soap_wsdl_complextypestrategy_complextypestrategyinterface_addcomplextype)
  PHP_FE_END
};