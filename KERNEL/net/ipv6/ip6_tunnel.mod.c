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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb8172048, "xfrm6_tunnel_deregister" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x97255bdf, "strlen" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xac0af05c, "dst_release" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0x75a38389, "skb_clone" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x1edea196, "dst_cache_set_ip6" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0xf0d913c7, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xc633fd64, "ip6_redirect" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xf687108, "nla_put" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0xee1fc842, "dst_cache_get" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x76bc441e, "gro_cells_receive" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xa35a7090, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0xe4ecf487, "ip_route_input_noref" },
	{ 0xb456479d, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xe4e91cd7, "__get_hash_from_flowi6" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x168809ba, "ip6_update_pmtu" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xb82b3617, "rt6_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0xf46b0a1f, "ip_tunnel_header_ops" },
	{ 0x683f26a8, "ip6tun_encaps" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x38de8673, "ip6_local_out" },
	{ 0x4fad61, "consume_skb" },
	{ 0x38aa35d5, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8ae05000, "xfrm6_tunnel_register" },
	{ 0x2def1f10, "xfrm_lookup" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xc376ca74, "ipv6_push_frag_opts" },
	{ 0x225a62f0, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6");

