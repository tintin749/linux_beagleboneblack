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
	{ 0x937dd33, "nf_nat_pptp_hook_expectfn" },
	{ 0x89ca446b, "nf_nat_pptp_hook_exp_gre" },
	{ 0x84cd4f7b, "nf_nat_pptp_hook_inbound" },
	{ 0x61adb851, "nf_nat_pptp_hook_outbound" },
	{ 0xf2a36612, "pptp_msg_name" },
	{ 0xa4b40d87, "__nf_nat_mangle_tcp_packet" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x204833c2, "nf_nat_setup_info" },
	{ 0x637a81e4, "nf_ct_expect_put" },
	{ 0xcd03ac02, "nf_ct_unexpect_related" },
	{ 0xb63194df, "nf_ct_expect_find_get" },
	{ 0x447a76ec, "nf_ct_nat_ext_add" },
	{ 0x5f754e5a, "memset" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");

