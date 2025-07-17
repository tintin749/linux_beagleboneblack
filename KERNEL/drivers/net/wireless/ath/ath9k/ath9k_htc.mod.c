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
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9f1d6e13, "ath9k_hw_set_txq_props" },
	{ 0x16ce33ae, "ieee80211_csa_finish" },
	{ 0x3fa72fdb, "ath9k_hw_init" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x45681ad7, "ath9k_cmn_get_channel" },
	{ 0xb91a4354, "ath9k_hw_deinit" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xdb60e9c8, "device_release_driver" },
	{ 0x2c4f43cc, "ath9k_hw_set_gpio" },
	{ 0xbc4727e5, "ath9k_cmn_init_crypto" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0xf4012adb, "ath9k_cmn_process_rate" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x88573999, "ath9k_hw_btcoex_enable" },
	{ 0x936343b9, "ath9k_hw_wait" },
	{ 0x88dc8509, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x9ab983c8, "ath9k_hw_stopdmarecv" },
	{ 0x35271f2, "ath_key_delete" },
	{ 0x85d3d39, "ath9k_cmn_update_txpow" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x32d22097, "ath9k_hw_gpio_get" },
	{ 0xc71d5ed2, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96830966, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf7902e94, "ath9k_hw_setrxfilter" },
	{ 0xb619c622, "ath9k_hw_get_txq_props" },
	{ 0x892b538f, "ath9k_hw_releasetxqueue" },
	{ 0x8f7578b1, "ath9k_hw_reset_tsf" },
	{ 0xe2144e31, "wiphy_rfkill_start_polling" },
	{ 0x2fe6ca90, "usb_get_urb" },
	{ 0x39335474, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe0b93969, "ath9k_cmn_init_channels_rates" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x10225b13, "ieee80211_tx_status" },
	{ 0xb2d2ddf3, "ath_printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x465b364b, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x2bfcbe77, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2a9fe415, "ath9k_hw_resettxqueue" },
	{ 0x2ca0ec9b, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x730b6015, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x3366b1e6, "ath9k_hw_set_tsfadjust" },
	{ 0xa09ea16c, "ath9k_cmn_beacon_config_ap" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc26f486, "ath9k_hw_btcoex_disable" },
	{ 0xaa99d2cc, "ath9k_hw_getrxfilter" },
	{ 0x1a842467, "ath9k_hw_ani_monitor" },
	{ 0xb2d3832b, "ath_is_mybeacon" },
	{ 0x57a89899, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0xb710bbc9, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc022da1f, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xed2685d4, "wiphy_rfkill_stop_polling" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd5a738bf, "ath9k_hw_write_associd" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x36cfa7c, "ath_reg_notifier_apply" },
	{ 0x472d1e09, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x20cb0a8e, "ath9k_hw_init_btcoex_hw" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x2c32945a, "ath9k_hw_beaconq_setup" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x8ac1d41a, "ath9k_hw_name" },
	{ 0x419a500d, "ath9k_hw_init_global_settings" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x70878e77, "ath9k_hw_settsf64" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8371aa2, "wiphy_rfkill_set_hw_state" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x92bdc239, "ath9k_hw_beaconinit" },
	{ 0xa35f6fc8, "ieee80211_find_sta" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x66871b6c, "ieee80211_get_buffered_bc" },
	{ 0x8ea39136, "usb_interrupt_msg" },
	{ 0xe75ef86b, "ath9k_hw_gpio_free" },
	{ 0xfbdc2c6e, "ath9k_hw_btcoex_bt_stomp" },
	{ 0x37bdf3d2, "ath9k_hw_setrxabort" },
	{ 0xe26b6cc3, "ath9k_cmn_beacon_config_sta" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x97512a46, "ath_hw_setbssidmask" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x961dab8e, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x5c0b8c9f, "ath9k_hw_phy_disable" },
	{ 0x554bb300, "__ieee80211_get_radio_led_name" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0x5ead4796, "ath9k_hw_setpower" },
	{ 0xdd8ed695, "__ieee80211_create_tpt_led_trigger" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2e91ca, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x22114804, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xaab9b2a1, "ath9k_hw_setmcastfilter" },
	{ 0xa8d839be, "ieee80211_start_tx_ba_session" },
	{ 0x67f70391, "ath9k_hw_gpio_request_out" },
	{ 0x9ec36685, "ath9k_hw_startpcureceive" },
	{ 0xf16bb58a, "ath9k_hw_setuptxqueue" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x9d3b9752, "ath9k_hw_reset" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3d29f913, "ath9k_cmn_rx_accept" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xeb6d7e68, "ath9k_hw_btcoex_init_3wire" },
	{ 0xf82a5373, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xc5a3aa72, "ath9k_hw_reset_calvalid" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
