
extern zend_class_entry *zendframework_paginator_adapter_adapterinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Paginator_Adapter_AdapterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_paginator_adapter_adapterinterface_getitems, 0, 0, 2)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, itemCountPerPage)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_paginator_adapter_adapterinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Paginator_Adapter_AdapterInterface, getItems, arginfo_zendframework_paginator_adapter_adapterinterface_getitems)
  PHP_FE_END
};
