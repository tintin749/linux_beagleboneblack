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
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
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
	{ 0x4efd0c65, "mii_ethtool_gset" },
	{ 0x5f754e5a, "memset" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x61982676, "usbnet_update_max_qlen" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xfae79cd1, "eth_platform_get_mac_address" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x3091bdaf, "usbnet_write_cmd_async" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x551da0bd, "usbnet_link_change" },
	{ 0x72035a73, "generic_mii_ioctl" },
	{ 0x8d7952c2, "mii_ethtool_get_link_ksettings" },
	{ 0x5ca12af0, "mii_ethtool_set_link_ksettings" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0xaff21bde, "usbnet_write_cmd_nopm" },
	{ 0x138569c2, "netdev_warn" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0xd2ce3e87, "usbnet_read_cmd_nopm" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");
