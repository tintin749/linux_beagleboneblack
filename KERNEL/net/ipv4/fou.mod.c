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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa4e30548, "inet6_offloads" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xfb3e27ae, "udp_sock_create6" },
	{ 0x8c302cf0, "setup_udp_tunnel_sock" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x528d6406, "udp_tunnel_sock_release" },
	{ 0x5f754e5a, "memset" },
	{ 0x72c6430d, "ip_tunnel_encap_del_ops" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xf687108, "nla_put" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xe31b378, "iptunnel_handle_offloads" },
	{ 0xeb1c6dad, "inet_protos" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe28c022e, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0xb30c5766, "udp_set_csum" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xba632071, "udp_sock_create4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdbab1fcf, "inet_get_local_port_range" },
	{ 0x80b5ad4b, "ip_tunnel_encap_add_ops" },
	{ 0x59b69c9, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");

