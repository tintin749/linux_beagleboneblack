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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd2022c86, "usbnet_cdc_unbind" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x75a38389, "skb_clone" },
	{ 0xbccb375f, "usbnet_generic_cdc_bind" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x8ea39136, "usb_interrupt_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0xa5641881, "eth_mac_addr" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");
