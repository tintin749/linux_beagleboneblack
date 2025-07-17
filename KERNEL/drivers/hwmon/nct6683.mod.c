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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0x5f754e5a, "memset" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x26567c12, "__devm_request_region" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xae9849dd, "__request_region" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

