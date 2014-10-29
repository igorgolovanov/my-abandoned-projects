
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "zendframework.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *zendframework_servicemanager_exception_exceptioninterface_ce;
zend_class_entry *zendframework_di_exception_exceptioninterface_ce;
zend_class_entry *zendframework_loader_exception_exceptioninterface_ce;
zend_class_entry *zendframework_stdlib_exception_exceptioninterface_ce;
zend_class_entry *zendframework_validator_exception_exceptioninterface_ce;
zend_class_entry *zendframework_view_exception_exceptioninterface_ce;
zend_class_entry *zendframework_eventmanager_exception_exceptioninterface_ce;
zend_class_entry *zendframework_stdlib_messageinterface_ce;
zend_class_entry *zendframework_di_locatorinterface_ce;
zend_class_entry *zendframework_eventmanager_eventinterface_ce;
zend_class_entry *zendframework_eventmanager_eventscapableinterface_ce;
zend_class_entry *zendframework_eventmanager_sharedeventmanagerawareinterface_ce;
zend_class_entry *zendframework_loader_shortnamelocator_ce;
zend_class_entry *zendframework_di_dependencyinjectioninterface_ce;
zend_class_entry *zendframework_di_servicelocatorinterface_ce;
zend_class_entry *zendframework_eventmanager_eventmanagerawareinterface_ce;
zend_class_entry *zendframework_eventmanager_eventmanagerinterface_ce;
zend_class_entry *zendframework_eventmanager_filter_filterinterface_ce;
zend_class_entry *zendframework_eventmanager_listeneraggregateinterface_ce;
zend_class_entry *zendframework_eventmanager_sharedeventaggregateawareinterface_ce;
zend_class_entry *zendframework_eventmanager_sharedeventmanagerinterface_ce;
zend_class_entry *zendframework_eventmanager_sharedlisteneraggregateinterface_ce;
zend_class_entry *zendframework_filter_filterinterface_ce;
zend_class_entry *zendframework_loader_pluginclasslocator_ce;
zend_class_entry *zendframework_loader_splautoloader_ce;
zend_class_entry *zendframework_log_loggerawareinterface_ce;
zend_class_entry *zendframework_log_loggerinterface_ce;
zend_class_entry *zendframework_servicemanager_abstractfactoryinterface_ce;
zend_class_entry *zendframework_servicemanager_configinterface_ce;
zend_class_entry *zendframework_servicemanager_delegatorfactoryinterface_ce;
zend_class_entry *zendframework_servicemanager_factoryinterface_ce;
zend_class_entry *zendframework_servicemanager_initializerinterface_ce;
zend_class_entry *zendframework_servicemanager_mutablecreationoptionsinterface_ce;
zend_class_entry *zendframework_servicemanager_servicelocatorawareinterface_ce;
zend_class_entry *zendframework_servicemanager_servicelocatorinterface_ce;
zend_class_entry *zendframework_stdlib_arrayserializableinterface_ce;
zend_class_entry *zendframework_stdlib_dispatchableinterface_ce;
zend_class_entry *zendframework_stdlib_extractor_extractioninterface_ce;
zend_class_entry *zendframework_stdlib_initializableinterface_ce;
zend_class_entry *zendframework_stdlib_parameterobjectinterface_ce;
zend_class_entry *zendframework_stdlib_parametersinterface_ce;
zend_class_entry *zendframework_stdlib_requestinterface_ce;
zend_class_entry *zendframework_stdlib_responseinterface_ce;
zend_class_entry *zendframework_validator_translator_translatorawareinterface_ce;
zend_class_entry *zendframework_validator_translator_translatorinterface_ce;
zend_class_entry *zendframework_validator_validatorinterface_ce;
zend_class_entry *zendframework_view_helper_helperinterface_ce;
zend_class_entry *zendframework_view_model_clearablemodelinterface_ce;
zend_class_entry *zendframework_view_model_modelinterface_ce;
zend_class_entry *zendframework_view_model_retrievablechildreninterface_ce;
zend_class_entry *zendframework_view_renderer_rendererinterface_ce;
zend_class_entry *zendframework_view_renderer_treerendererinterface_ce;
zend_class_entry *zendframework_view_resolver_resolverinterface_ce;
zend_class_entry *zendframework_servicemanager_exception_runtimeexception_ce;
zend_class_entry *zendframework_di_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_loader_exception_domainexception_ce;
zend_class_entry *zendframework_eventmanager_exception_domainexception_ce;
zend_class_entry *zendframework_servicemanager_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_stdlib_exception_domainexception_ce;
zend_class_entry *zendframework_stdlib_exception_runtimeexception_ce;
zend_class_entry *zendframework_validator_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_validator_exception_runtimeexception_ce;
zend_class_entry *zendframework_di_exception_circulardependencyexception_ce;
zend_class_entry *zendframework_di_exception_classnotfoundexception_ce;
zend_class_entry *zendframework_di_exception_invalidcallbackexception_ce;
zend_class_entry *zendframework_di_exception_invalidparamnameexception_ce;
zend_class_entry *zendframework_di_exception_invalidpositionexception_ce;
zend_class_entry *zendframework_di_exception_missingpropertyexception_ce;
zend_class_entry *zendframework_di_exception_runtimeexception_ce;
zend_class_entry *zendframework_di_exception_undefinedreferenceexception_ce;
zend_class_entry *zendframework_eventmanager_event_ce;
zend_class_entry *zendframework_eventmanager_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_eventmanager_exception_invalidcallbackexception_ce;
zend_class_entry *zendframework_loader_exception_badmethodcallexception_ce;
zend_class_entry *zendframework_loader_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_loader_exception_invalidpathexception_ce;
zend_class_entry *zendframework_loader_exception_missingresourcenamespaceexception_ce;
zend_class_entry *zendframework_loader_exception_pluginloaderexception_ce;
zend_class_entry *zendframework_loader_exception_runtimeexception_ce;
zend_class_entry *zendframework_loader_exception_securityexception_ce;
zend_class_entry *zendframework_servicemanager_exception_circulardependencyfoundexception_ce;
zend_class_entry *zendframework_servicemanager_exception_circularreferenceexception_ce;
zend_class_entry *zendframework_servicemanager_exception_invalidservicenameexception_ce;
zend_class_entry *zendframework_servicemanager_exception_servicenotcreatedexception_ce;
zend_class_entry *zendframework_servicemanager_exception_servicenotfoundexception_ce;
zend_class_entry *zendframework_stdlib_callbackhandler_ce;
zend_class_entry *zendframework_stdlib_exception_badmethodcallexception_ce;
zend_class_entry *zendframework_stdlib_exception_extensionnotloadedexception_ce;
zend_class_entry *zendframework_stdlib_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_stdlib_exception_invalidcallbackexception_ce;
zend_class_entry *zendframework_stdlib_exception_logicexception_ce;
zend_class_entry *zendframework_stdlib_message_ce;
zend_class_entry *zendframework_stdlib_splpriorityqueue_ce;
zend_class_entry *zendframework_stdlib_splqueue_ce;
zend_class_entry *zendframework_stdlib_splstack_ce;
zend_class_entry *zendframework_validator_exception_badmethodcallexception_ce;
zend_class_entry *zendframework_validator_exception_extensionnotloadedexception_ce;
zend_class_entry *zendframework_validator_exception_invalidmagicmimefileexception_ce;
zend_class_entry *zendframework_view_exception_badmethodcallexception_ce;
zend_class_entry *zendframework_view_exception_domainexception_ce;
zend_class_entry *zendframework_view_exception_invalidargumentexception_ce;
zend_class_entry *zendframework_view_exception_invalidhelperexception_ce;
zend_class_entry *zendframework_view_exception_runtimeexception_ce;
zend_class_entry *zendframework_view_exception_unexpectedvalueexception_ce;

ZEND_DECLARE_MODULE_GLOBALS(zendframework)

#define ZEPHIR_NUM_PREALLOCATED_FRAMES 25

void zephir_initialize_memory(zend_zephir_globals_def *zephir_globals_ptr TSRMLS_DC)
{
	zephir_memory_entry *start;
	size_t i;

	start = (zephir_memory_entry *) pecalloc(ZEPHIR_NUM_PREALLOCATED_FRAMES, sizeof(zephir_memory_entry), 1);
/* pecalloc() will take care of these members for every frame
	start->pointer      = 0;
	start->hash_pointer = 0;
	start->prev = NULL;
	start->next = NULL;
*/
	for (i = 0; i < ZEPHIR_NUM_PREALLOCATED_FRAMES; ++i) {
		start[i].addresses       = pecalloc(24, sizeof(zval*), 1);
		start[i].capacity        = 24;
		start[i].hash_addresses  = pecalloc(8, sizeof(zval*), 1);
		start[i].hash_capacity   = 8;

#ifndef ZEPHIR_RELEASE
		start[i].permanent = 1;
#endif
	}

	start[0].next = &start[1];
	start[ZEPHIR_NUM_PREALLOCATED_FRAMES - 1].prev = &start[ZEPHIR_NUM_PREALLOCATED_FRAMES - 2];

	for (i = 1; i < ZEPHIR_NUM_PREALLOCATED_FRAMES - 1; ++i) {
		start[i].next = &start[i + 1];
		start[i].prev = &start[i - 1];
	}

	zephir_globals_ptr->start_memory = start;
	zephir_globals_ptr->end_memory   = start + ZEPHIR_NUM_PREALLOCATED_FRAMES;

	zephir_globals_ptr->fcache = pemalloc(sizeof(HashTable), 1);
	zend_hash_init(zephir_globals_ptr->fcache, 128, NULL, NULL, 1); // zephir_fcall_cache_dtor

	/* 'Allocator sizeof operand mismatch' warning can be safely ignored */
	ALLOC_INIT_ZVAL(zephir_globals_ptr->global_null);
	Z_SET_REFCOUNT_P(zephir_globals_ptr->global_null, 2);

	/* 'Allocator sizeof operand mismatch' warning can be safely ignored */
	ALLOC_INIT_ZVAL(zephir_globals_ptr->global_false);
	Z_SET_REFCOUNT_P(zephir_globals_ptr->global_false, 2);
	ZVAL_FALSE(zephir_globals_ptr->global_false);

	/* 'Allocator sizeof operand mismatch' warning can be safely ignored */
	ALLOC_INIT_ZVAL(zephir_globals_ptr->global_true);
	Z_SET_REFCOUNT_P(zephir_globals_ptr->global_true, 2);
	ZVAL_TRUE(zephir_globals_ptr->global_true);

	zephir_globals_ptr->initialized = 1;
}

int zephir_cleanup_fcache(void *pDest TSRMLS_DC, int num_args, va_list args, zend_hash_key *hash_key)
{
	zephir_fcall_cache_entry **entry = (zephir_fcall_cache_entry**)pDest;
	zend_class_entry *scope;
	uint len = hash_key->nKeyLength;

	assert(hash_key->arKey != NULL);
	assert(hash_key->nKeyLength > 2 * sizeof(zend_class_entry**));

	memcpy(&scope, &hash_key->arKey[len - 2 * sizeof(zend_class_entry**)], sizeof(zend_class_entry*));

/*
#ifndef ZEPHIR_RELEASE
	{
		zend_class_entry *cls;
		memcpy(&cls, &hash_key->arKey[len - sizeof(zend_class_entry**)], sizeof(zend_class_entry*));

		fprintf(stderr, "func: %s, cls: %s, scope: %s [%u]\n", (*entry)->f->common.function_name, (cls ? cls->name : "N/A"), (scope ? scope->name : "N/A"), (uint)(*entry)->times);
	}
#endif
*/

#ifndef ZEPHIR_RELEASE
	if ((*entry)->f->type != ZEND_INTERNAL_FUNCTION || (scope && scope->type != ZEND_INTERNAL_CLASS)) {
		return ZEND_HASH_APPLY_REMOVE;
	}
#else
	if ((*entry)->type != ZEND_INTERNAL_FUNCTION || (scope && scope->type != ZEND_INTERNAL_CLASS)) {
		return ZEND_HASH_APPLY_REMOVE;
	}
#endif

#if PHP_VERSION_ID >= 50400
	if (scope && scope->type == ZEND_INTERNAL_CLASS && scope->info.internal.module->type != MODULE_PERSISTENT) {
		return ZEND_HASH_APPLY_REMOVE;
	}
#else
	if (scope && scope->type == ZEND_INTERNAL_CLASS && scope->module->type != MODULE_PERSISTENT) {
		return ZEND_HASH_APPLY_REMOVE;
	}
#endif

	return ZEND_HASH_APPLY_KEEP;
}

void zephir_deinitialize_memory(TSRMLS_D)
{
	size_t i;
	zend_zephir_globals_def *zephir_globals_ptr = ZEPHIR_VGLOBAL;

	if (zephir_globals_ptr->initialized != 1) {
		zephir_globals_ptr->initialized = 0;
		return;
	}

	if (zephir_globals_ptr->start_memory != NULL) {
		zephir_clean_restore_stack(TSRMLS_C);
	}

	zend_hash_apply_with_arguments(zephir_globals_ptr->fcache TSRMLS_CC, zephir_cleanup_fcache, 0);

#ifndef ZEPHIR_RELEASE
	assert(zephir_globals_ptr->start_memory != NULL);
#endif

	for (i = 0; i < ZEPHIR_NUM_PREALLOCATED_FRAMES; ++i) {
		pefree(zephir_globals_ptr->start_memory[i].hash_addresses, 1);
		pefree(zephir_globals_ptr->start_memory[i].addresses, 1);
	}

	pefree(zephir_globals_ptr->start_memory, 1);
	zephir_globals_ptr->start_memory = NULL;

	zend_hash_destroy(zephir_globals_ptr->fcache);
	pefree(zephir_globals_ptr->fcache, 1);
	zephir_globals_ptr->fcache = NULL;

	for (i = 0; i < 2; i++) {
		zval_ptr_dtor(&zephir_globals_ptr->global_null);
		zval_ptr_dtor(&zephir_globals_ptr->global_false);
		zval_ptr_dtor(&zephir_globals_ptr->global_true);
	}

	zephir_globals_ptr->initialized = 0;
}

static PHP_MINIT_FUNCTION(zendframework)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif

	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_Di_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_View_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_Exception_ExceptionInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_MessageInterface);
	ZEPHIR_INIT(ZendFramework_Di_LocatorInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_EventInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_EventsCapableInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_SharedEventManagerAwareInterface);
	ZEPHIR_INIT(ZendFramework_Loader_ShortNameLocator);
	ZEPHIR_INIT(ZendFramework_Di_DependencyInjectionInterface);
	ZEPHIR_INIT(ZendFramework_Di_ServiceLocatorInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_EventManagerAwareInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_EventManagerInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_Filter_FilterInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_ListenerAggregateInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_SharedEventAggregateAwareInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_SharedEventManagerInterface);
	ZEPHIR_INIT(ZendFramework_EventManager_SharedListenerAggregateInterface);
	ZEPHIR_INIT(ZendFramework_Filter_FilterInterface);
	ZEPHIR_INIT(ZendFramework_Loader_PluginClassLocator);
	ZEPHIR_INIT(ZendFramework_Loader_SplAutoloader);
	ZEPHIR_INIT(ZendFramework_Log_LoggerAwareInterface);
	ZEPHIR_INIT(ZendFramework_Log_LoggerInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_AbstractFactoryInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_ConfigInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_DelegatorFactoryInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_FactoryInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_InitializerInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_MutableCreationOptionsInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_ServiceLocatorAwareInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_ServiceLocatorInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_ArraySerializableInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_DispatchableInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_Extractor_ExtractionInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_InitializableInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_ParameterObjectInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_ParametersInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_RequestInterface);
	ZEPHIR_INIT(ZendFramework_Stdlib_ResponseInterface);
	ZEPHIR_INIT(ZendFramework_Validator_Translator_TranslatorAwareInterface);
	ZEPHIR_INIT(ZendFramework_Validator_Translator_TranslatorInterface);
	ZEPHIR_INIT(ZendFramework_Validator_ValidatorInterface);
	ZEPHIR_INIT(ZendFramework_View_Helper_HelperInterface);
	ZEPHIR_INIT(ZendFramework_View_Model_ClearableModelInterface);
	ZEPHIR_INIT(ZendFramework_View_Model_ModelInterface);
	ZEPHIR_INIT(ZendFramework_View_Model_RetrievableChildrenInterface);
	ZEPHIR_INIT(ZendFramework_View_Renderer_RendererInterface);
	ZEPHIR_INIT(ZendFramework_View_Renderer_TreeRendererInterface);
	ZEPHIR_INIT(ZendFramework_View_Resolver_ResolverInterface);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_DomainException);
	ZEPHIR_INIT(ZendFramework_EventManager_Exception_DomainException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_DomainException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_CircularDependencyException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_ClassNotFoundException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_InvalidCallbackException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_InvalidParamNameException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_InvalidPositionException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_MissingPropertyException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_Di_Exception_UndefinedReferenceException);
	ZEPHIR_INIT(ZendFramework_EventManager_Event);
	ZEPHIR_INIT(ZendFramework_EventManager_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_EventManager_Exception_InvalidCallbackException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_BadMethodCallException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_InvalidPathException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_MissingResourceNamespaceException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_PluginLoaderException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_Loader_Exception_SecurityException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_CircularDependencyFoundException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_CircularReferenceException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_InvalidServiceNameException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_ServiceNotCreatedException);
	ZEPHIR_INIT(ZendFramework_ServiceManager_Exception_ServiceNotFoundException);
	ZEPHIR_INIT(ZendFramework_Stdlib_CallbackHandler);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_BadMethodCallException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_ExtensionNotLoadedException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_InvalidCallbackException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Exception_LogicException);
	ZEPHIR_INIT(ZendFramework_Stdlib_Message);
	ZEPHIR_INIT(ZendFramework_Stdlib_SplPriorityQueue);
	ZEPHIR_INIT(ZendFramework_Stdlib_SplQueue);
	ZEPHIR_INIT(ZendFramework_Stdlib_SplStack);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_BadMethodCallException);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_ExtensionNotLoadedException);
	ZEPHIR_INIT(ZendFramework_Validator_Exception_InvalidMagicMimeFileException);
	ZEPHIR_INIT(ZendFramework_View_Exception_BadMethodCallException);
	ZEPHIR_INIT(ZendFramework_View_Exception_DomainException);
	ZEPHIR_INIT(ZendFramework_View_Exception_InvalidArgumentException);
	ZEPHIR_INIT(ZendFramework_View_Exception_InvalidHelperException);
	ZEPHIR_INIT(ZendFramework_View_Exception_RuntimeException);
	ZEPHIR_INIT(ZendFramework_View_Exception_UnexpectedValueException);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(zendframework)
{

	zephir_deinitialize_memory(TSRMLS_C);

	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_zendframework_globals *zephir_globals TSRMLS_DC)
{
	zephir_globals->initialized = 0;

	/* Memory options */
	zephir_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	zephir_globals->active_symbol_table = NULL;

	/* Cache Enabled */
#if PHP_VERSION_ID < 50600
	zephir_globals->cache_enabled = 1;
#else
	zephir_globals->cache_enabled = 0;
#endif

	/* Recursive Lock */
	zephir_globals->recursive_lock = 0;


}

static PHP_RINIT_FUNCTION(zendframework)
{

	zend_zendframework_globals *zephir_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(zephir_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(zephir_globals_ptr TSRMLS_CC);

	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(zendframework)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(zendframework)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_ZENDFRAMEWORK_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_ZENDFRAMEWORK_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_ZENDFRAMEWORK_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_ZENDFRAMEWORK_VERSION);
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_ZENDFRAMEWORK_ZEPVERSION);
	php_info_print_table_end();


}

static PHP_GINIT_FUNCTION(zendframework)
{
	php_zephir_init_globals(zendframework_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(zendframework)
{

}

zend_module_entry zendframework_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_ZENDFRAMEWORK_EXTNAME,
	NULL,
	PHP_MINIT(zendframework),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(zendframework),
#else
	NULL,
#endif
	PHP_RINIT(zendframework),
	PHP_RSHUTDOWN(zendframework),
	PHP_MINFO(zendframework),
	PHP_ZENDFRAMEWORK_VERSION,
	ZEND_MODULE_GLOBALS(zendframework),
	PHP_GINIT(zendframework),
	PHP_GSHUTDOWN(zendframework),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_ZENDFRAMEWORK
ZEND_GET_MODULE(zendframework)
#endif