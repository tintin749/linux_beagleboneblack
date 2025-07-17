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
	{ 0x5f711fcb, "param_ops_string" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x4a74a0b7, "rndis_tx_fixup" },
	{ 0x26967aa0, "rndis_rx_fixup" },
	{ 0xc489b9e7, "rndis_status" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x6470e488, "usbnet_purge_paused_rxq" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5fce42a0, "wiphy_register" },
	{ 0x80dc3fdc, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbb2edfb3, "wiphy_new_nm" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa3d937a4, "cfg80211_roamed" },
	{ 0xf20de49f, "cfg80211_ibss_joined" },
	{ 0xaa019770, "cfg80211_disconnected" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x1d55a8c6, "usbnet_resume_rx" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x29611139, "cfg80211_cqm_rssi_notify" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x7dfa5331, "wiphy_free" },
	{ 0xeb337465, "wiphy_unregister" },
	{ 0xe77147ad, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x541e8215, "cfg80211_scan_done" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x876ebb7e, "cfg80211_put_bss" },
	{ 0x2fc66b42, "cfg80211_inform_bss_data" },
	{ 0x87b89061, "cfg80211_connect_done" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0xb8d41201, "ieee80211_get_channel_khz" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd644d34a, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8a14c642, "cfg80211_pmksa_candidate_notify" },
	{ 0x44ead7df, "cfg80211_michael_mic_failure" },
	{ 0xd08bdabc, "usbnet_pause_rx" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
};

MODULE_INFO(depends, "rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
