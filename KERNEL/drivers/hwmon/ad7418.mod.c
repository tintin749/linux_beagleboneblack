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
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad7416");
MODULE_ALIAS("of:N*T*Cadi,ad7416C*");
MODULE_ALIAS("of:N*T*Cadi,ad7417");
MODULE_ALIAS("of:N*T*Cadi,ad7417C*");
MODULE_ALIAS("of:N*T*Cadi,ad7418");
MODULE_ALIAS("of:N*T*Cadi,ad7418C*");
MODULE_ALIAS("i2c:ad7416");
MODULE_ALIAS("i2c:ad7417");
MODULE_ALIAS("i2c:ad7418");

MODULE_INFO(srcversion, "E5A7EAD5289F6C2C8476314");
