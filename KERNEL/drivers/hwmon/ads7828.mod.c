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
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x563ad7c8, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ads7828");
MODULE_ALIAS("of:N*T*Cti,ads7828C*");
MODULE_ALIAS("of:N*T*Cti,ads7830");
MODULE_ALIAS("of:N*T*Cti,ads7830C*");
MODULE_ALIAS("i2c:ads7828");
MODULE_ALIAS("i2c:ads7830");
