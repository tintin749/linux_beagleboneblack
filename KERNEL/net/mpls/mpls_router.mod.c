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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x9b1bb81c, "dev_get_flags" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xac0af05c, "dst_release" },
	{ 0x75a38389, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9665f50, "rtnl_notify" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x72c6430d, "ip_tunnel_encap_del_ops" },
	{ 0x6e2f3c64, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x499ba349, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0xf687108, "nla_put" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0x9a25b758, "rtnl_af_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1a0d8be9, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x82a9ee57, "ipv6_stub" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x71ccc9d, "ip_valid_fib_dump_req" },
	{ 0x4fb6ab20, "nla_reserve_64bit" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xaedb1190, "rtnl_unicast" },
	{ 0xe4f85256, "rtnl_set_sk_err" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xaacca3b4, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfcd11d53, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0xb87e7a95, "skb_gso_validate_network_len" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x80b5ad4b, "ip_tunnel_encap_add_ops" },
	{ 0x2815efe7, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");

