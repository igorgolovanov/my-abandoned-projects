
extern zend_class_entry *zendframework_mail_header_structuredinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Mail_Header_StructuredInterface);

ZEPHIR_INIT_FUNCS(zendframework_mail_header_structuredinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Mail_Header_StructuredInterface, getDelimiter, NULL)
  PHP_FE_END
};
