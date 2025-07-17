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
	{ 0x97255bdf, "strlen" },
	{ 0xa569e8e3, "iptun_encaps" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xac0af05c, "dst_release" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xec4766b4, "dst_cache_get_ip4" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xf9b5fa1b, "icmp_ndo_send" },
	{ 0xb6fc2f80, "iptunnel_xmit" },
	{ 0x76bc441e, "gro_cells_receive" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4aec65, "init_net" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xb5a96d64, "icmpv6_ndo_send" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x4f525191, "dst_cache_set_ip4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xceb33e72, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

