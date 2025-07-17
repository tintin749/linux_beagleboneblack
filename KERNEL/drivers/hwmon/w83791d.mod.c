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
	{ 0xceeee77a, "param_array_ops" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x34782487, "param_ops_short" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x91452968, "_dev_err" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x1a3a3c63, "devm_i2c_new_dummy_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:w83791d");
