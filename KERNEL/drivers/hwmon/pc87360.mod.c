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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0x5f754e5a, "memset" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x483a055b, "device_create_file" },
	{ 0x91452968, "_dev_err" },
	{ 0x26567c12, "__devm_request_region" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xe428104e, "device_remove_file" },
};

MODULE_INFO(depends, "hwmon-vid");

