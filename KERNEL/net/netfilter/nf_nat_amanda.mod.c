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
	{ 0xd46190fa, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4a90eb6a, "nf_nat_amanda_hook" },
	{ 0x825db6fc, "nf_nat_helper_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcd03ac02, "nf_ct_unexpect_related" },
	{ 0xede76444, "nf_ct_helper_log" },
	{ 0x10046d3f, "nf_nat_mangle_udp_packet" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0xa7a8e1c7, "nf_nat_follow_master" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_amanda,nf_nat");

