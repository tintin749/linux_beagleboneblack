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
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x37bff1b5, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa96ebc90, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x10225b13, "ieee80211_tx_status" },
	{ 0x5f754e5a, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x448b4776, "simple_open" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xddd0292, "ieee80211_pspoll_get" },
	{ 0x1aa84cef, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x61c21c52, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xb3a84e4b, "ieee80211_probereq_get" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x738c0b10, "skb_put" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

