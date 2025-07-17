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
	{ 0x24d68172, "ip_tunnel_get_link_net" },
	{ 0x812d4a7a, "ip_tunnel_get_iflink" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x10211e88, "xfrm4_tunnel_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xa7a51903, "xfrm4_tunnel_deregister" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x412b2e07, "ip_tunnel_ioctl" },
	{ 0x9ff0bbdb, "ip_tunnel_encap_setup" },
	{ 0x97255bdf, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x4f525191, "dst_cache_set_ip4" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb6fc2f80, "iptunnel_xmit" },
	{ 0xa569e8e3, "iptun_encaps" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xec4766b4, "dst_cache_get_ip4" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xe245d20, "ip_tunnel_xmit" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x27d7db76, "ipv6_chk_prefix" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa65ce0aa, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0xac0af05c, "dst_release" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0x540ecb28, "ip_tunnel_rcv" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x71c90087, "memcmp" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xb4aec65, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0xa0287c62, "ip6_err_gen_icmpv6_unreach" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0x2820969, "ns_capable" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf46b0a1f, "ip_tunnel_header_ops" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");

