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
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45158076, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2d3385d3, "system_wq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");
