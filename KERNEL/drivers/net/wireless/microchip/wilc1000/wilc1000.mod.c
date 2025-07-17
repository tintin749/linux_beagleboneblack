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
	{ 0xa84b5654, "register_netdevice" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7dfa5331, "wiphy_free" },
	{ 0x87b89061, "cfg80211_connect_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0xaa4d8879, "__srcu_read_unlock" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf6089c35, "cfg80211_stop_iface" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x2bdb82b3, "cfg80211_mgmt_tx_status" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb50c43b2, "cfg80211_get_bss" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd273f33c, "cleanup_srcu_struct" },
	{ 0x71c90087, "memcmp" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xeb337465, "wiphy_unregister" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x613a13a0, "cfg80211_rx_mgmt_khz" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x40582fd2, "__srcu_read_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x985a1be6, "init_srcu_struct" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xb8d41201, "ieee80211_get_channel_khz" },
	{ 0x876ebb7e, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5fce42a0, "wiphy_register" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x94d511c4, "cfg80211_ready_on_channel" },
	{ 0xbb2edfb3, "wiphy_new_nm" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x3066972, "wake_up_process" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xaa019770, "cfg80211_disconnected" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xf2ee7a43, "synchronize_srcu" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfb474c21, "cfg80211_ref_bss" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xcadb195d, "cfg80211_remain_on_channel_expired" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x541e8215, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xbc2a1622, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");

