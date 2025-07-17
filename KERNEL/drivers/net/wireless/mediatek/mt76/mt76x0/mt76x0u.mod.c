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
	{ 0xc82141b3, "mt76x02_remove_interface" },
	{ 0xcab068b8, "__mt76_poll" },
	{ 0x833631de, "mt76_sta_pre_rcu_remove" },
	{ 0xda2d8692, "mt76_sw_scan" },
	{ 0xaf0ca922, "mt76x02_conf_tx" },
	{ 0x38656a0a, "mt76x02_ampdu_action" },
	{ 0x3c029a24, "mt76u_stop_rx" },
	{ 0x49896734, "mt76x02u_exit_beacon_config" },
	{ 0x4e632fe0, "mt76x02_add_interface" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7a966b5b, "mt76u_vendor_request" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xa1e51808, "mt76x02u_init_beacon_config" },
	{ 0xcd1cb552, "mt76u_stop_tx" },
	{ 0x16467d21, "mt76u_alloc_queues" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xbd99b832, "mt76x02_bss_info_changed" },
	{ 0xb4b854ef, "mt76x02u_mac_start" },
	{ 0xf5537465, "mt76x0_init_hardware" },
	{ 0x9cb9ffe2, "mt76_sta_state" },
	{ 0x72f16b99, "mt76x02_set_rts_threshold" },
	{ 0x20dd8d52, "mt76x02u_tx_prepare_skb" },
	{ 0x428dbaf8, "mt76x02u_init_mcu" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe5267764, "mt76_get_survey" },
	{ 0x8563e5f0, "mt76u_init" },
	{ 0xc21344e9, "mt76x02u_mcu_fw_send_data" },
	{ 0x1e3f9304, "mt76x0_mac_stop" },
	{ 0x8e1cdb44, "mt76x02_sta_add" },
	{ 0x244138b, "mt76x02_tx_status_data" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x30c34fd0, "mt76x02_sta_remove" },
	{ 0xbc8363e6, "mt76x02_tx" },
	{ 0xc3abb51e, "__mt76_poll_msec" },
	{ 0x3aa22417, "mt76x02_sw_scan_complete" },
	{ 0xb84beb90, "mt76_set_tim" },
	{ 0xa4f0b9a7, "mt76x0_phy_calibrate" },
	{ 0x51d59084, "mt76x02u_mcu_fw_reset" },
	{ 0x91452968, "_dev_err" },
	{ 0x4494e701, "mt76x0_register_device" },
	{ 0xbebac9c2, "mt76x0_config" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0xe72b25c4, "mt76u_queues_deinit" },
	{ 0x9abfc422, "mt76x02_queue_rx_skb" },
	{ 0x2eba3b1f, "mt76x0_chip_onoff" },
	{ 0xf599cd88, "mt76_free_device" },
	{ 0xcba1102f, "mt76x02_configure_filter" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7e9f2e2c, "mt76x02_update_channel" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x9669a2c3, "mt76_alloc_device" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x7b431d2b, "mt76x02_sta_rate_tbl_update" },
	{ 0x82efe123, "mt76u_resume_rx" },
	{ 0x4c04b029, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a6a341a, "mt76_get_antenna" },
	{ 0x918bd4c1, "mt76_wake_tx_queue" },
	{ 0xa189442e, "mt76_get_txpower" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x60aa94b4, "mt76_release_buffered_frames" },
	{ 0x9d1d91cb, "mt76x02_set_key" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b7926ee, "firmware_request_nowarn" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7d930e96, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");
