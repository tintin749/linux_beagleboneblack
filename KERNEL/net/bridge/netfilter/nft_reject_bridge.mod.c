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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0x67b6606d, "nf_reject_ip_tcphdr_put" },
	{ 0x8f0ca97f, "nf_reject_ip_tcphdr_get" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x7282a096, "nf_reject_ip6_tcphdr_put" },
	{ 0x26cc1ad0, "nf_reject_ip6_tcphdr_get" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x357e8b24, "nf_reject_iphdr_put" },
	{ 0xa1efb173, "nf_ip_checksum" },
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0x6ece817b, "br_forward" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0xbebbb8c5, "nf_reject_ip6hdr_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xfe784278, "nf_ip6_checksum" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8c5c3d1b, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");

