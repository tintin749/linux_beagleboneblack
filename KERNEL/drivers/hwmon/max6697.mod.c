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
	{ 0xfdba9257, "i2c_match_id" },
	{ 0x9b126258, "of_get_property" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max6581");
MODULE_ALIAS("of:N*T*Cmaxim,max6581C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6602");
MODULE_ALIAS("of:N*T*Cmaxim,max6602C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6622");
MODULE_ALIAS("of:N*T*Cmaxim,max6622C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6636");
MODULE_ALIAS("of:N*T*Cmaxim,max6636C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6689");
MODULE_ALIAS("of:N*T*Cmaxim,max6689C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6693");
MODULE_ALIAS("of:N*T*Cmaxim,max6693C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6694");
MODULE_ALIAS("of:N*T*Cmaxim,max6694C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6697");
MODULE_ALIAS("of:N*T*Cmaxim,max6697C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6698");
MODULE_ALIAS("of:N*T*Cmaxim,max6698C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6699");
MODULE_ALIAS("of:N*T*Cmaxim,max6699C*");
MODULE_ALIAS("i2c:max6581");
MODULE_ALIAS("i2c:max6602");
MODULE_ALIAS("i2c:max6622");
MODULE_ALIAS("i2c:max6636");
MODULE_ALIAS("i2c:max6689");
MODULE_ALIAS("i2c:max6693");
MODULE_ALIAS("i2c:max6694");
MODULE_ALIAS("i2c:max6697");
MODULE_ALIAS("i2c:max6698");
MODULE_ALIAS("i2c:max6699");
