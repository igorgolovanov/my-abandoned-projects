
extern zend_class_entry *zendframework_db_sql_expressioninterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Db_Sql_ExpressionInterface);

ZEPHIR_INIT_FUNCS(zendframework_db_sql_expressioninterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Db_Sql_ExpressionInterface, getExpressionData, NULL)
  PHP_FE_END
};
