
extern zend_class_entry *zendframework_stdlib_jsonserializable_phplegacycompatibility_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Stdlib_JsonSerializable_PhpLegacyCompatibility);

ZEPHIR_INIT_FUNCS(zendframework_stdlib_jsonserializable_phplegacycompatibility_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Stdlib_JsonSerializable_PhpLegacyCompatibility, jsonSerialize, NULL)
  PHP_FE_END
};
