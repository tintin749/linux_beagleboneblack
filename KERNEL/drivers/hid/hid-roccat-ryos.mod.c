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
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xbf451cca, "__class_create" },
	{ 0x91452968, "_dev_err" },
	{ 0xb535a087, "roccat_connect" },
	{ 0xdd361233, "roccat_common2_device_init_struct" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0x3793a73d, "roccat_common2_sysfs_read" },
	{ 0x91f34d57, "roccat_common2_sysfs_write" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3e4427c8, "roccat_report_event" },
};

MODULE_INFO(depends, "hid-roccat,hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");
