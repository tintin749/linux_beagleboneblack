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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x53be6385, "ieee80211_rts_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc37ab22f, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96830966, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2144e31, "wiphy_rfkill_start_polling" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0x10225b13, "ieee80211_tx_status" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x6aed4477, "ieee80211_ctstoself_get" },
	{ 0xed2685d4, "wiphy_rfkill_stop_polling" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x62f3ba5e, "of_get_mac_address" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8371aa2, "wiphy_rfkill_set_hw_state" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x12c329e, "dma_map_page_attrs" },
	{ 0x66871b6c, "ieee80211_get_buffered_bc" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb3bcaf4, "ieee80211_tx_status_ext" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x2b1799ef, "led_classdev_suspend" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x4676ae5a, "dma_unmap_page_attrs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x9aa512e5, "ieee80211_iterate_interfaces" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "50FADA1C5C9C3F3345EE421");
