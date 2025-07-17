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
	{ 0x72265e5b, "nf_nat_tftp_hook" },
	{ 0x825db6fc, "nf_nat_helper_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xede76444, "nf_ct_helper_log" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0xa7a8e1c7, "nf_nat_follow_master" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");

