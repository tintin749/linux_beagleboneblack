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
	{ 0x91346c1c, "ip_tunnel_ctl" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0x812d4a7a, "ip_tunnel_get_iflink" },
	{ 0xac0af05c, "dst_release" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0x7812af8, "ip_tunnel_lookup" },
	{ 0xc54404d8, "__ip_tunnel_change_mtu" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xf0d913c7, "__icmp_send" },
	{ 0xe245d20, "ip_tunnel_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xabbb1e8d, "inetdev_by_index" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x8fbab0a1, "ip_tunnel_setup" },
	{ 0x7be6502a, "ip_tunnel_dellink" },
	{ 0x5f754e5a, "memset" },
	{ 0xc1560f77, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xba472676, "ip_tunnel_delete_nets" },
	{ 0xa07335ed, "gre_add_protocol" },
	{ 0xb43b13b2, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xf4d6581f, "ip_tunnel_uninit" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xf687108, "nla_put" },
	{ 0x9a06c2c6, "gre_del_protocol" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xba784f78, "ip_tunnel_init" },
	{ 0x24d68172, "ip_tunnel_get_link_net" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x412b2e07, "ip_tunnel_ioctl" },
	{ 0xa9b7eac0, "__ip_mc_dec_group" },
	{ 0x912267c0, "ip_md_tunnel_xmit" },
	{ 0x377cf10c, "ip_tunnel_changelink" },
	{ 0xef62963f, "rtnl_configure_link" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0xffa16f6, "ip_mc_inc_group" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x70eec54e, "ip_tunnel_init_net" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x19aa2d34, "rtnl_create_link" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa0287c62, "ip6_err_gen_icmpv6_unreach" },
	{ 0x9d669763, "memcpy" },
	{ 0xb266e265, "___pskb_trim" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ff0bbdb, "ip_tunnel_encap_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc117b452, "ip_tunnel_change_mtu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x1cb8fa67, "gre_parse_header" },
	{ 0x540ecb28, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre");

