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
	{ 0x48bab49e, "usbnet_set_link_ksettings" },
	{ 0xea30db03, "usbnet_get_link_ksettings" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x724d9c7c, "usbnet_change_mtu" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x551da0bd, "usbnet_link_change" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd4272e6f, "usbnet_status_start" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91452968, "_dev_err" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37a0cba, "kfree" },
	{ 0x68236156, "usbnet_status_stop" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x75a38389, "skb_clone" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "280E8679DCE1CB54C5A4300");
