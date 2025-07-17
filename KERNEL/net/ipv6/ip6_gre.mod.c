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
	{ 0xecaea043, "ip6_tnl_get_link_net" },
	{ 0xea08943e, "ip6_tnl_get_iflink" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x4400f3a4, "inet6_del_protocol" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x57011cd9, "inet6_add_protocol" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xb266e265, "___pskb_trim" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2820969, "ns_capable" },
	{ 0xf687108, "nla_put" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0x1f65b719, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc1560f77, "skb_checksum" },
	{ 0x5f754e5a, "memset" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x153454f, "ip6_tnl_xmit" },
	{ 0x97255bdf, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x225a62f0, "icmp6_send" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x152e49aa, "ip6_tnl_rcv" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x168809ba, "ip6_update_pmtu" },
	{ 0xc633fd64, "ip6_redirect" },
	{ 0x1cb8fa67, "gre_parse_header" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0x3e874a86, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x9d669763, "memcpy" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xe4e91cd7, "__get_hash_from_flowi6" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x4628cf90, "ip6_tnl_encap_setup" },
	{ 0xe62ccada, "ip6_tnl_change_mtu" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xb4aec65, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0xac0af05c, "dst_release" },
	{ 0xb82b3617, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1490a6f6, "ip6_tnl_get_cap" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");

