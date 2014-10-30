
extern zend_class_entry *zendframework_ldap_node_schema_objectclass_objectclassinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface);

ZEPHIR_INIT_FUNCS(zendframework_ldap_node_schema_objectclass_objectclassinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getName, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getOid, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getMustContain, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getMayContain, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getDescription, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getType, NULL)
	PHP_ABSTRACT_ME(ZendFramework_Ldap_Node_Schema_ObjectClass_ObjectClassInterface, getParentClasses, NULL)
  PHP_FE_END
};
