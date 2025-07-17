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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x3474aaa4, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0xd714f4ee, "dev_disable_lro" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x91c8b1c5, "vlan_uses_dev" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x75a38389, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0xe6259eb1, "vlan_vid_del" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x87b5d9b3, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc369bf06, "__netpoll_setup" },
	{ 0x6d0bc650, "vlan_vids_del_by_dev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x9372658, "vlan_vids_add_by_dev" },
	{ 0x424e07ed, "netdev_master_upper_dev_link" },
	{ 0xbeeba9d7, "netdev_lower_state_changed" },
	{ 0xedbf770c, "netdev_change_features" },
	{ 0x37a5febe, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9d1bc72, "dev_set_mac_address" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x190e7ae8, "dev_close" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xb78e4b52, "dev_mc_flush" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb3431117, "dev_open" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc116dc1b, "dev_uc_flush" },
	{ 0xe864a95a, "module_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x926142b5, "passthru_features_check" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe9fd1013, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x8106e467, "dev_uc_sync_multiple" },
	{ 0x9d669763, "memcpy" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xbca3414a, "netpoll_send_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x69f25fc1, "__netpoll_free" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x50992cef, "try_module_get" },
	{ 0xceb33e72, "dev_set_mtu" },
};

MODULE_INFO(depends, "");

