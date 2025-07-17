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
	{ 0xac0af05c, "dst_release" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x609c64d, "security_skb_classify_flow" },
	{ 0x5c999ed3, "nf_ct_attach" },
	{ 0x5f754e5a, "memset" },
	{ 0x3a99792d, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa11201a0, "__nf_ip6_route" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x38de8673, "ip6_local_out" },
	{ 0x38aa35d5, "ip6_dst_hoplimit" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x2def1f10, "xfrm_lookup" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xfe784278, "nf_ip6_checksum" },
	{ 0x225a62f0, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");

