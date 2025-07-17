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
	{ 0xecaea043, "ip6_tnl_get_link_net" },
	{ 0xea08943e, "ip6_tnl_get_iflink" },
	{ 0x16752883, "ip_tunnel_get_stats64" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x1d685b0c, "xfrm6_protocol_deregister" },
	{ 0xb8172048, "xfrm6_tunnel_deregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x8ae05000, "xfrm6_tunnel_register" },
	{ 0xcac7e25d, "xfrm6_protocol_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0x1f65b719, "ip6_tnl_xmit_ctl" },
	{ 0xaa854789, "xfrm_lookup_route" },
	{ 0xb866750a, "ip_route_output_key_hash" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x47172cbb, "__xfrm_decode_session" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2820969, "ns_capable" },
	{ 0xbcd653f5, "xfrm6_tunnel_spi_lookup" },
	{ 0x86eb4617, "xfrm_input" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x97fca5ea, "ip6_tnl_rcv_ctl" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0xc633fd64, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x168809ba, "ip6_update_pmtu" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xb4aec65, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xf46b0a1f, "ip_tunnel_header_ops" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xac0af05c, "dst_release" },
	{ 0xb82b3617, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x1490a6f6, "ip6_tnl_get_cap" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip6_tunnel,tunnel6,xfrm6_tunnel");

