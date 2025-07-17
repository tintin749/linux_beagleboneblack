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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6520076f, "nf_ct_helper_expectfn_unregister" },
	{ 0x4df7aefa, "nf_ct_helper_expectfn_register" },
	{ 0x4a879a3b, "nat_q931_hook" },
	{ 0x59f85da8, "nat_callforwarding_hook" },
	{ 0xa5802b35, "nat_h245_hook" },
	{ 0x414983c8, "nat_t120_hook" },
	{ 0x1bdfcdf1, "nat_rtp_rtcp_hook" },
	{ 0x54485578, "set_ras_addr_hook" },
	{ 0xbca8e9e7, "set_sig_addr_hook" },
	{ 0xb7600157, "set_h225_addr_hook" },
	{ 0x58502035, "set_h245_addr_hook" },
	{ 0x1e290c89, "get_h225_addr" },
	{ 0xcd03ac02, "nf_ct_unexpect_related" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xa4b40d87, "__nf_nat_mangle_tcp_packet" },
	{ 0x10046d3f, "nf_nat_mangle_udp_packet" },
	{ 0xa7a8e1c7, "nf_nat_follow_master" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x204833c2, "nf_nat_setup_info" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");

