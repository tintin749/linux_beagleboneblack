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
	{ 0x77e2c7c, "ieee80211_rx_irqsafe" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc207ee07, "complete_and_exit" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x83d2a225, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x37bff1b5, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa96ebc90, "ieee80211_scan_completed" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xe2144e31, "wiphy_rfkill_start_polling" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0x2dc67f53, "ieee80211_ready_on_channel" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2d0b5233, "ieee80211_remain_on_channel_expired" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xed2685d4, "wiphy_rfkill_stop_polling" },
	{ 0xaacc9e27, "sort" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x472d1e09, "wiphy_to_ieee80211_hw" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8371aa2, "wiphy_rfkill_set_hw_state" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3066972, "wake_up_process" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0x908cdfc4, "ieee80211_generic_frame_duration" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8d839be, "ieee80211_start_tx_ba_session" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb3a84e4b, "ieee80211_probereq_get" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x738c0b10, "skb_put" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xd370cbf1, "rsi_bt_ops" },
	{ 0xe82d9bd4, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,cfg80211,btrsi");


MODULE_INFO(srcversion, "13F0E5FB2316AEFC8D1E434");
