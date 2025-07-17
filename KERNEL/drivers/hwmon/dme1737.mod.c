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
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x26567c12, "__devm_request_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0xcb46da6, "sysfs_chmod_file" },
	{ 0x7e1c4af9, "sysfs_create_file_ns" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x9d669763, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0x39f5802, "sysfs_remove_file_ns" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:dme1737");
MODULE_ALIAS("i2c:sch5027");
