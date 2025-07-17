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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x89ea2af0, "dev_forward_skb" },
	{ 0xfe490f50, "dev_change_flags" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x24653fb7, "ip_local_out" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0xe6259eb1, "vlan_vid_del" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x87b5d9b3, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa24491bf, "ida_free" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0x71749ce5, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xe4ecf487, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x8793a3b3, "eth_header_cache_update" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfb73c08f, "eth_header_parse" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8a9f323, "eth_header_cache" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x1d344320, "dev_uc_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x38de8673, "ip6_local_out" },
	{ 0x4fad61, "consume_skb" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9e6a1dd2, "netdev_is_rx_handler_busy" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x7e681fb1, "dev_mc_sync" },
	{ 0x80a7755c, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x8a93e168, "ip6_route_input_lookup" },
	{ 0x17ddc3fc, "__do_once_done" },
};

MODULE_INFO(depends, "");

