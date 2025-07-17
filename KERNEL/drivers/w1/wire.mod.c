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
	{ 0x67f0e816, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x99d62744, "cn_add_callback" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8221889f, "driver_register" },
	{ 0x414159bd, "of_find_matching_node_and_match" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x8112492b, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xba5a7bec, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0x41dd3834, "flush_signals" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9180bf4a, "sysfs_create_groups" },
	{ 0x44cc20ac, "sysfs_remove_groups" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

