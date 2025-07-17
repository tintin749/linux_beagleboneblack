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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xe0fb5a0c, "mt76x02_phy_set_txdac" },
	{ 0xe92765ce, "mt76x2_phy_set_txpower" },
	{ 0x84d14d55, "mt76x2_phy_set_txpower_regs" },
	{ 0xce1fb411, "mt76x2_read_rx_gain" },
	{ 0xcab068b8, "__mt76_poll" },
	{ 0x4d3d6d5c, "mt76x02_mac_wcid_setup" },
	{ 0x833631de, "mt76_sta_pre_rcu_remove" },
	{ 0xda2d8692, "mt76_sw_scan" },
	{ 0x82b76aaf, "mt76x02_mcu_function_select" },
	{ 0xaf0ca922, "mt76x02_conf_tx" },
	{ 0x97ca12dc, "mt76x02_mcu_calibrate" },
	{ 0x38656a0a, "mt76x02_ampdu_action" },
	{ 0x3c029a24, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4e632fe0, "mt76x02_add_interface" },
	{ 0x7a966b5b, "mt76u_vendor_request" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xa1e51808, "mt76x02u_init_beacon_config" },
	{ 0xcd1cb552, "mt76u_stop_tx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16467d21, "mt76u_alloc_queues" },
	{ 0x9fffad26, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8d4b30d3, "mt76x2_phy_update_channel_gain" },
	{ 0xa4ae30c, "mt76x02_init_agc_gain" },
	{ 0xbd99b832, "mt76x02_bss_info_changed" },
	{ 0xb0d1eadf, "mt76x02_mac_cc_reset" },
	{ 0xb4b854ef, "mt76x02u_mac_start" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0xaf2fc644, "mt76x2_phy_tssi_compensate" },
	{ 0x9cb9ffe2, "mt76_sta_state" },
	{ 0xe9a06bf2, "mt76x2_mcu_init_gain" },
	{ 0x20dd8d52, "mt76x02u_tx_prepare_skb" },
	{ 0x428dbaf8, "mt76x02u_init_mcu" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xda54193b, "mt76x02_init_debugfs" },
	{ 0xe5267764, "mt76_get_survey" },
	{ 0x8563e5f0, "mt76u_init" },
	{ 0xc21344e9, "mt76x02u_mcu_fw_send_data" },
	{ 0x1136cbff, "mt76x2_init_txpower" },
	{ 0x59b54d80, "mt76x2_mcu_load_cr" },
	{ 0x8e1cdb44, "mt76x02_sta_add" },
	{ 0x244138b, "mt76x02_tx_status_data" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xb586f328, "mt76x02_edcca_init" },
	{ 0xc16cf34a, "mt76x02_phy_set_rxpath" },
	{ 0x30c34fd0, "mt76x02_sta_remove" },
	{ 0xd2b40985, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0xbc8363e6, "mt76x02_tx" },
	{ 0xc3abb51e, "__mt76_poll_msec" },
	{ 0xa4364368, "mt76x02_init_device" },
	{ 0xc50eb6c, "mt76_set_channel" },
	{ 0x707b5bcf, "mt76x02_phy_set_band" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x783d8371, "mt76x02_phy_set_bw" },
	{ 0x3aa22417, "mt76x02_sw_scan_complete" },
	{ 0xb84beb90, "mt76_set_tim" },
	{ 0xa35aa41f, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x66053232, "mt76x02_mac_setaddr" },
	{ 0x51d59084, "mt76x02u_mcu_fw_reset" },
	{ 0x91452968, "_dev_err" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0xe72b25c4, "mt76u_queues_deinit" },
	{ 0x9abfc422, "mt76x02_queue_rx_skb" },
	{ 0xf599cd88, "mt76_free_device" },
	{ 0xcba1102f, "mt76x02_configure_filter" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6cded3, "mt76x2_configure_tx_delay" },
	{ 0x7e9f2e2c, "mt76x02_update_channel" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x97680d77, "mt76x2_mac_stop" },
	{ 0xd1c8c8ae, "mt76x02_ext_pa_enabled" },
	{ 0xe15663bf, "mt76x02_mac_shared_key_setup" },
	{ 0x9669a2c3, "mt76_alloc_device" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x7b431d2b, "mt76x02_sta_rate_tbl_update" },
	{ 0x82efe123, "mt76u_resume_rx" },
	{ 0x4c04b029, "mt76x02_sta_ps" },
	{ 0x7b787713, "mt76x2_apply_gain_adj" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2a6a341a, "mt76_get_antenna" },
	{ 0x918bd4c1, "mt76_wake_tx_queue" },
	{ 0x8019a592, "mt76x02_mcu_set_radio_state" },
	{ 0x196aba8d, "mt76x2_mcu_set_channel" },
	{ 0xcd2b787a, "mt76x2_reset_wlan" },
	{ 0x868c6304, "mt76_write_mac_initvals" },
	{ 0xa189442e, "mt76_get_txpower" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x60aa94b4, "mt76_release_buffered_frames" },
	{ 0x9d1d91cb, "mt76x02_set_key" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7da71671, "mt76x02_set_ethtool_fwver" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7d930e96, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");
