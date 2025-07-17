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
	{ 0x48bab49e, "usbnet_set_link_ksettings" },
	{ 0xea30db03, "usbnet_get_link_ksettings" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x724d9c7c, "usbnet_change_mtu" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4efd0c65, "mii_ethtool_gset" },
	{ 0x9918e748, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x551da0bd, "usbnet_link_change" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x3091bdaf, "usbnet_write_cmd_async" },
	{ 0x72035a73, "generic_mii_ioctl" },
	{ 0x328a05f1, "strncpy" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0x884ceb23, "mii_link_ok" },
	{ 0x738c0b10, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FE6p9800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "121A5CB35C7F896A2896F08");
