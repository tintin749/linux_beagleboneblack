#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xd50c1d7a, "devm_regmap_field_alloc" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0xb3e70fc0, "regmap_field_update_bits_base" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xce2b3af7, "regmap_field_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csensortek,stk3310");
MODULE_ALIAS("of:N*T*Csensortek,stk3310C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3311");
MODULE_ALIAS("of:N*T*Csensortek,stk3311C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3335");
MODULE_ALIAS("of:N*T*Csensortek,stk3335C*");
MODULE_ALIAS("acpi*:STK3310:*");
MODULE_ALIAS("acpi*:STK3311:*");
MODULE_ALIAS("acpi*:STK3335:*");
MODULE_ALIAS("i2c:STK3310");
MODULE_ALIAS("i2c:STK3311");
MODULE_ALIAS("i2c:STK3335");
