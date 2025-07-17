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
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x77e2c7c, "ieee80211_rx_irqsafe" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbdc62cf5, "__ieee80211_get_assoc_led_name" },
	{ 0x8bba90ea, "skb_unlink" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xaacc9e27, "sort" },
	{ 0x91452968, "_dev_err" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xfc9bcd2b, "__ieee80211_get_rx_led_name" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8371aa2, "wiphy_rfkill_set_hw_state" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xe2b6dac8, "__ieee80211_get_tx_led_name" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x554bb300, "__ieee80211_get_radio_led_name" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x22114804, "regulatory_hint" },
	{ 0x61c21c52, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
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
};

MODULE_INFO(depends, "mac80211,cfg80211");

