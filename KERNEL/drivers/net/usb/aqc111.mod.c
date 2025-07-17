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
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0xa69c8599, "usb_driver_set_configuration" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0x7cdd3abd, "usb_reset_configuration" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xd2ce3e87, "usbnet_read_cmd_nopm" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x738c0b10, "skb_put" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x3091bdaf, "usbnet_write_cmd_async" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0x2d9dba66, "usbnet_defer_kevent" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");
