
extern zend_class_entry *zendframework_math_biginteger_adapter_adapterinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Math_BigInteger_Adapter_AdapterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_init, 0, 0, 1)
	ZEND_ARG_INFO(0, operand)
	ZEND_ARG_INFO(0, base)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_add, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_sub, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_mul, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_div, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_pow, 0, 0, 2)
	ZEND_ARG_INFO(0, operand)
	ZEND_ARG_INFO(0, exp)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_sqrt, 0, 0, 1)
	ZEND_ARG_INFO(0, operand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_abs, 0, 0, 1)
	ZEND_ARG_INFO(0, operand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_mod, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, modulus)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_powmod, 0, 0, 3)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
	ZEND_ARG_INFO(0, modulus)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_comp, 0, 0, 2)
	ZEND_ARG_INFO(0, leftOperand)
	ZEND_ARG_INFO(0, rightOperand)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_inttobin, 0, 0, 1)
	ZEND_ARG_INFO(0, int)
	ZEND_ARG_INFO(0, twoc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_bintoint, 0, 0, 1)
	ZEND_ARG_INFO(0, bytes)
	ZEND_ARG_INFO(0, twoc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_math_biginteger_adapter_adapterinterface_baseconvert, 0, 0, 2)
	ZEND_ARG_INFO(0, operand)
	ZEND_ARG_INFO(0, fromBase)
	ZEND_ARG_INFO(0, toBase)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_math_biginteger_adapter_adapterinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, init, arginfo_zendframework_math_biginteger_adapter_adapterinterface_init)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, add, arginfo_zendframework_math_biginteger_adapter_adapterinterface_add)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, sub, arginfo_zendframework_math_biginteger_adapter_adapterinterface_sub)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, mul, arginfo_zendframework_math_biginteger_adapter_adapterinterface_mul)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, div, arginfo_zendframework_math_biginteger_adapter_adapterinterface_div)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, pow, arginfo_zendframework_math_biginteger_adapter_adapterinterface_pow)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, sqrt, arginfo_zendframework_math_biginteger_adapter_adapterinterface_sqrt)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, abs, arginfo_zendframework_math_biginteger_adapter_adapterinterface_abs)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, mod, arginfo_zendframework_math_biginteger_adapter_adapterinterface_mod)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, powmod, arginfo_zendframework_math_biginteger_adapter_adapterinterface_powmod)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, comp, arginfo_zendframework_math_biginteger_adapter_adapterinterface_comp)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, intToBin, arginfo_zendframework_math_biginteger_adapter_adapterinterface_inttobin)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, binToInt, arginfo_zendframework_math_biginteger_adapter_adapterinterface_bintoint)
	PHP_ABSTRACT_ME(ZendFramework_Math_BigInteger_Adapter_AdapterInterface, baseConvert, arginfo_zendframework_math_biginteger_adapter_adapterinterface_baseconvert)
  PHP_FE_END
};
