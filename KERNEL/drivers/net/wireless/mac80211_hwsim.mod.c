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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xe3264f62, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xbf451cca, "__class_create" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb3a84e4b, "ieee80211_probereq_get" },
	{ 0x457ad8d7, "ieee80211_tx_prepare_skb" },
	{ 0x16ce33ae, "ieee80211_csa_finish" },
	{ 0x57a89899, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x66871b6c, "ieee80211_get_buffered_bc" },
	{ 0xc68810a2, "ieee80211_beacon_get_tim" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2ac7a090, "ieee80211_get_tx_rates" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x7aa9285d, "__skb_ext_put" },
	{ 0xac0af05c, "dst_release" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x43145f74, "page_address" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xa60266c3, "skb_copy" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa24491bf, "ida_free" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x77e2c7c, "ieee80211_rx_irqsafe" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x49f26466, "kstrndup" },
	{ 0xc5850110, "printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x22114804, "regulatory_hint" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7b845602, "wiphy_apply_custom_regulatory" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1332c0b0, "device_bind_driver" },
	{ 0x8781d48, "device_create" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xdb60e9c8, "device_release_driver" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0xb4aec65, "init_net" },
	{ 0x36cc4b37, "genl_notify" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x2d0b5233, "ieee80211_remain_on_channel_expired" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa96ebc90, "ieee80211_scan_completed" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2dc67f53, "ieee80211_ready_on_channel" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4cc193e2, "cfg80211_vendor_cmd_reply" },
	{ 0xe9c4ff5e, "__cfg80211_alloc_reply_skb" },
	{ 0x47d31810, "__cfg80211_send_event_skb" },
	{ 0xae501b95, "__cfg80211_alloc_event_skb" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0x96830966, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x35c01e5f, "ieee80211_radar_detected" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xeac16fb4, "virtqueue_detach_unused_buf" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x97255bdf, "strlen" },
	{ 0xf687108, "nla_put" },
	{ 0x71c90087, "memcmp" },
	{ 0x4fad61, "consume_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("virtio:d0000001Dv*");
