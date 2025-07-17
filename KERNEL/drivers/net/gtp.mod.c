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
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x73e5201a, "__put_net" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0xdb111b23, "get_net_ns_by_fd" },
	{ 0xa4558b8b, "udp_tunnel_xmit_skb" },
	{ 0x4fad61, "consume_skb" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x5f754e5a, "memset" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8c302cf0, "setup_udp_tunnel_sock" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x7bcf8005, "fput" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x951425dc, "sk_free" },
	{ 0x81fed507, "release_sock" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "udp_tunnel");

