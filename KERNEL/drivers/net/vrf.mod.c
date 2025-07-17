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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xab1540ce, "l3mdev_table_lookup_unregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x58a64040, "l3mdev_table_lookup_register" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x82a9ee57, "ipv6_stub" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xfe80f315, "arp_tbl" },
	{ 0xbeea1ba4, "inet_select_addr" },
	{ 0xae7fff01, "ip6_dst_lookup_flow" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x2ffeae01, "nf_hook_slow" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0xa0a18645, "__neigh_create" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x60199663, "nd_tbl" },
	{ 0x433fb4ac, "netdev_lower_get_next" },
	{ 0x424e07ed, "netdev_master_upper_dev_link" },
	{ 0x6c402c33, "netdev_master_upper_dev_get" },
	{ 0xfe490f50, "dev_change_flags" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0xe9a82d07, "ip6_dst_alloc" },
	{ 0x241b3934, "fib6_new_table" },
	{ 0x60862e4c, "rt_dst_alloc" },
	{ 0x85371849, "fib_new_table" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xac0af05c, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9359b8d7, "dev_queue_xmit_nit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd7ce2b8b, "fib_nl_delrule" },
	{ 0x546e90fa, "fib_nl_newrule" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5f754e5a, "memset" },
	{ 0x846e673b, "ip6_pol_route" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DAB823616A3499F1197FDA4");
