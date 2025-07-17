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
	{ 0x4df7aefa, "nf_ct_helper_expectfn_register" },
	{ 0xd46190fa, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6520076f, "nf_ct_helper_expectfn_unregister" },
	{ 0x9590b0cb, "nf_nat_sip_hooks" },
	{ 0x825db6fc, "nf_nat_helper_unregister" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0x62d46e09, "ct_sip_parse_request" },
	{ 0xc8ce6ad3, "ct_sip_parse_numerical_param" },
	{ 0xf0fcff9f, "ct_sip_parse_address_param" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x204833c2, "nf_nat_setup_info" },
	{ 0x6eafe6b0, "ct_sip_parse_header_uri" },
	{ 0xede76444, "nf_ct_helper_log" },
	{ 0xcd03ac02, "nf_ct_unexpect_related" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0x97b409e9, "nf_ct_seqadj_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa7238935, "ct_sip_get_header" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6a3570d0, "ct_sip_get_sdp_header" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa4b40d87, "__nf_nat_mangle_tcp_packet" },
	{ 0x10046d3f, "nf_nat_mangle_udp_packet" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");

