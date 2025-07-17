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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x48bab49e, "usbnet_set_link_ksettings" },
	{ 0xea30db03, "usbnet_get_link_ksettings" },
	{ 0x36265214, "usbnet_get_link" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xfae79cd1, "eth_platform_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4efd0c65, "mii_ethtool_gset" },
	{ 0x9918e748, "mii_check_media" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x75a38389, "skb_clone" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xf102732a, "crc16" },
	{ 0x72035a73, "generic_mii_ioctl" },
	{ 0x724d9c7c, "usbnet_change_mtu" },
	{ 0x9857200c, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5f754e5a, "memset" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x2d9dba66, "usbnet_defer_kevent" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd2ce3e87, "usbnet_read_cmd_nopm" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaff21bde, "usbnet_write_cmd_nopm" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");
