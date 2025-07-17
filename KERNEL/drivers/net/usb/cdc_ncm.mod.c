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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xfdf4170c, "usb_altnum_to_altsetting" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xaa152108, "hrtimer_active" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x551da0bd, "usbnet_link_change" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0x61982676, "usbnet_update_max_qlen" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x945c707, "netif_schedule_queue" },
	{ 0xfc6102c5, "usbnet_nway_reset" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x48bab49e, "usbnet_set_link_ksettings" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xea30db03, "usbnet_get_link_ksettings" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0xb9a84523, "usbnet_get_drvinfo" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x36265214, "usbnet_get_link" },
	{ 0x91452968, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb0079308, "usbnet_read_cmd" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x42a0deac, "cdc_parse_cdc_header" },
	{ 0x2fb46788, "usbnet_get_ethernet_addr" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x916020f1, "usbnet_get_msglevel" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8c23fbe5, "usbnet_unlink_rx_urbs" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0x64b5853f, "usbnet_cdc_update_filter" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x358867a4, "usbnet_manage_power" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0x32845218, "usbnet_set_msglevel" },
	{ 0xaed95c94, "usbnet_set_rx_mode" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
