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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xfcc10188, "gro_find_receive_by_type" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x1215f941, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9acc6729, "ip_tunnel_metadata_cnt" },
	{ 0xac0af05c, "dst_release" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa4558b8b, "udp_tunnel_xmit_skb" },
	{ 0x1edea196, "dst_cache_set_ip6" },
	{ 0x4cfa0512, "udp_tun_rx_dst" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xec4766b4, "dst_cache_get_ip4" },
	{ 0x845428ba, "dst_cache_get_ip6" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x65023c8c, "metadata_dst_free" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xfb3e27ae, "udp_sock_create6" },
	{ 0x8c302cf0, "setup_udp_tunnel_sock" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x528d6406, "udp_tunnel_sock_release" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xaca79cd1, "udp_tunnel_push_rx_port" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xf687108, "nla_put" },
	{ 0x76bc441e, "gro_cells_receive" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb1dee435, "gro_find_complete_by_type" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x82a9ee57, "ipv6_stub" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xa1b0395f, "skb_tunnel_check_pmtu" },
	{ 0xef62963f, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x8575dedb, "udp_tunnel_notify_add_rx_port" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xbdee38fa, "udp_tunnel_drop_rx_port" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x19aa2d34, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb82b3617, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x928dc0ae, "udp_tunnel6_xmit_skb" },
	{ 0x4f525191, "dst_cache_set_ip4" },
	{ 0xba632071, "udp_sock_create4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4fad61, "consume_skb" },
	{ 0x38aa35d5, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "66747032262DF1866CAA8BE");
