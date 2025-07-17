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
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnational,lm63");
MODULE_ALIAS("of:N*T*Cnational,lm63C*");
MODULE_ALIAS("of:N*T*Cnational,lm64");
MODULE_ALIAS("of:N*T*Cnational,lm64C*");
MODULE_ALIAS("of:N*T*Cnational,lm96163");
MODULE_ALIAS("of:N*T*Cnational,lm96163C*");
MODULE_ALIAS("i2c:lm63");
MODULE_ALIAS("i2c:lm64");
MODULE_ALIAS("i2c:lm96163");
