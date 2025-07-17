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
	{ 0x2d3385d3, "system_wq" },
	{ 0x77e2c7c, "ieee80211_rx_irqsafe" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf20bbef, "cfg80211_unlink_bss" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x5425688f, "ieee80211_resume_disconnect" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc9a2f2b8, "freq_reg_info" },
	{ 0xe2144e31, "wiphy_rfkill_start_polling" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8bba90ea, "skb_unlink" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb50c43b2, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xfb40bb53, "ieee80211_rate_control_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b845602, "wiphy_apply_custom_regulatory" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xed2685d4, "wiphy_rfkill_stop_polling" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x472d1e09, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x876ebb7e, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8371aa2, "wiphy_rfkill_set_hw_state" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa35f6fc8, "ieee80211_find_sta" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xcfb5b457, "ieee80211_rate_control_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8d839be, "ieee80211_start_tx_ba_session" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3fb42164, "ieee80211_connection_loss" },
	{ 0x9857200c, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

