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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x91452968, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x668b595, "_kstrtoul" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");
