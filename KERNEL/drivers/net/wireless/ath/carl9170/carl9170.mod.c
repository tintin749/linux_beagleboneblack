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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa14e6ba, "usb_get_from_anchor" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc71d5ed2, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xbdc62cf5, "__ieee80211_get_assoc_led_name" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0xf144f336, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb2d3832b, "ath_is_mybeacon" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0xa1eb6e57, "ieee80211_sta_block_awake" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x36cfa7c, "ath_reg_notifier_apply" },
	{ 0x472d1e09, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3310cb2c, "usb_queue_reset_device" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf98605d5, "ath_regd_get_band_ctl" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0x2ac7a090, "ieee80211_get_tx_rates" },
	{ 0x20496c04, "input_free_device" },
	{ 0xa35f6fc8, "ieee80211_find_sta" },
	{ 0xe2b6dac8, "__ieee80211_get_tx_led_name" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2f63e634, "usb_poison_anchored_urbs" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2e6ad09e, "ieee80211_restart_hw" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x22114804, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x906dd327, "usb_unpoison_anchored_urbs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x9857200c, "device_set_wakeup_enable" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xb2d4eb27, "usb_put_intf" },
	{ 0x42add580, "ieee80211_stop_tx_ba_session" },
	{ 0xe82d9bd4, "ieee80211_queue_stopped" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");
