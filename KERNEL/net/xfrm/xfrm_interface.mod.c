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
	{ 0x3dd38bf, "xfrm6_rcv" },
	{ 0x112acc1f, "xfrm4_rcv" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xfa329b2, "xfrm_if_register_cb" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x8ae05000, "xfrm6_tunnel_register" },
	{ 0xcac7e25d, "xfrm6_protocol_register" },
	{ 0x10211e88, "xfrm4_tunnel_register" },
	{ 0x23876797, "xfrm4_protocol_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xc633fd64, "ip6_redirect" },
	{ 0x168809ba, "ip6_update_pmtu" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xf46b0a1f, "ip_tunnel_header_ops" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0xb866750a, "ip_route_output_key_hash" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x112e8bf4, "xfrm_lookup_with_ifid" },
	{ 0x47172cbb, "__xfrm_decode_session" },
	{ 0x5f754e5a, "memset" },
	{ 0xac0af05c, "dst_release" },
	{ 0x42fa7c1d, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa24f715, "xfrm6_rcv_spi" },
	{ 0xbcd653f5, "xfrm6_tunnel_spi_lookup" },
	{ 0x1d685b0c, "xfrm6_protocol_deregister" },
	{ 0xb8172048, "xfrm6_tunnel_deregister" },
	{ 0x86eb4617, "xfrm_input" },
	{ 0xbb12c884, "xfrm4_protocol_deregister" },
	{ 0xa7a51903, "xfrm4_tunnel_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d669763, "memcpy" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x16cc526e, "dev_fetch_sw_netstats" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "tunnel6,tunnel4,xfrm6_tunnel");

