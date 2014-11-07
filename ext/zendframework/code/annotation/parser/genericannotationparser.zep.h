
extern zend_class_entry *zendframework_code_annotation_parser_genericannotationparser_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser);

PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, onCreateAnnotation);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, registerAnnotation);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, registerAnnotations);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, hasAnnotation);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, setAlias);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, normalizeAlias);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, hasAlias);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, resolveAlias);
PHP_METHOD(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_oncreateannotation, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, e, ZendFramework\\EventManager\\EventInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_registerannotation, 0, 0, 1)
	ZEND_ARG_INFO(0, annotation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_registerannotations, 0, 0, 1)
	ZEND_ARG_INFO(0, annotations)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_hasannotation, 0, 0, 1)
	ZEND_ARG_INFO(0, class)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_setalias, 0, 0, 2)
	ZEND_ARG_INFO(0, alias)
	ZEND_ARG_INFO(0, class)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_normalizealias, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_hasalias, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_code_annotation_parser_genericannotationparser_resolvealias, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_code_annotation_parser_genericannotationparser_method_entry) {
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, onCreateAnnotation, arginfo_zendframework_code_annotation_parser_genericannotationparser_oncreateannotation, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, registerAnnotation, arginfo_zendframework_code_annotation_parser_genericannotationparser_registerannotation, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, registerAnnotations, arginfo_zendframework_code_annotation_parser_genericannotationparser_registerannotations, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, hasAnnotation, arginfo_zendframework_code_annotation_parser_genericannotationparser_hasannotation, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, setAlias, arginfo_zendframework_code_annotation_parser_genericannotationparser_setalias, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, normalizeAlias, arginfo_zendframework_code_annotation_parser_genericannotationparser_normalizealias, ZEND_ACC_PROTECTED)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, hasAlias, arginfo_zendframework_code_annotation_parser_genericannotationparser_hasalias, ZEND_ACC_PROTECTED)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, resolveAlias, arginfo_zendframework_code_annotation_parser_genericannotationparser_resolvealias, ZEND_ACC_PROTECTED)
	PHP_ME(ZendFramework_Code_Annotation_Parser_GenericAnnotationParser, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};