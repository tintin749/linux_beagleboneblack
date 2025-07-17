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
	{ 0x7be6502a, "ip_tunnel_dellink" },
	{ 0x812d4a7a, "ip_tunnel_get_iflink" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0xc117b452, "ip_tunnel_change_mtu" },
	{ 0x412b2e07, "ip_tunnel_ioctl" },
	{ 0xf4d6581f, "ip_tunnel_uninit" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xa7a51903, "xfrm4_tunnel_deregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x10211e88, "xfrm4_tunnel_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0x540ecb28, "ip_tunnel_rcv" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0x9e2e6ed0, "__iptunnel_pull_header" },
	{ 0x70eec54e, "ip_tunnel_init_net" },
	{ 0xba472676, "ip_tunnel_delete_nets" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7812af8, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba784f78, "ip_tunnel_init" },
	{ 0xe245d20, "ip_tunnel_xmit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x912267c0, "ip_md_tunnel_xmit" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0x91346c1c, "ip_tunnel_ctl" },
	{ 0x8fbab0a1, "ip_tunnel_setup" },
	{ 0xf46b0a1f, "ip_tunnel_header_ops" },
	{ 0xb43b13b2, "ip_tunnel_newlink" },
	{ 0x377cf10c, "ip_tunnel_changelink" },
	{ 0x9ff0bbdb, "ip_tunnel_encap_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");

