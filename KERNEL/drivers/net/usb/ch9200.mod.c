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
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x2d9dba66, "usbnet_defer_kevent" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x91452968, "_dev_err" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x4efd0c65, "mii_ethtool_gset" },
	{ 0x9918e748, "mii_check_media" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");
