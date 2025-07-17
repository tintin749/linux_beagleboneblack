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
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x91452968, "_dev_err" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B02");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B34");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B3E");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B09");
