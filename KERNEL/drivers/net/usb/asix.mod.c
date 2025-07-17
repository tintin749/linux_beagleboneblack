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
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4efd0c65, "mii_ethtool_gset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf72afe1b, "phy_disconnect" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xd163716a, "phy_do_ioctl_running" },
	{ 0xecbee01b, "phy_stop" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x551da0bd, "usbnet_link_change" },
	{ 0xacfb0630, "__mdiobus_register" },
	{ 0xc880ed2d, "phy_ethtool_nway_reset" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x72035a73, "generic_mii_ioctl" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0x61982676, "usbnet_update_max_qlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x198560d3, "mdiobus_unregister" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xa5f9b369, "phy_print_status" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
	{ 0x48bab49e, "usbnet_set_link_ksettings" },
	{ 0x5f754e5a, "memset" },
	{ 0x7b069ae7, "phy_start" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xfae79cd1, "eth_platform_get_mac_address" },
	{ 0xc769aab2, "mdiobus_free" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xea30db03, "usbnet_get_link_ksettings" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd2ce3e87, "usbnet_read_cmd_nopm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x36265214, "usbnet_get_link" },
	{ 0xaff21bde, "usbnet_write_cmd_nopm" },
	{ 0x6e1280e6, "phy_ethtool_get_link_ksettings" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9975f654, "genphy_resume" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x9918e748, "mii_check_media" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x8c23fbe5, "usbnet_unlink_rx_urbs" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x89dde31e, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3091bdaf, "usbnet_write_cmd_async" },
	{ 0x724d9c7c, "usbnet_change_mtu" },
	{ 0xae3826e6, "phy_connect" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x884ceb23, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0x9f55be0a, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C0323DD5E34D1987D1D34D0");
