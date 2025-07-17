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
	{ 0xb08783e0, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd40d1b3d, "nf_ct_expect_init" },
	{ 0xba0d72c3, "textsearch_prepare" },
	{ 0xee0219e3, "nf_conntrack_helpers_register" },
	{ 0x98fa8908, "skb_find_text" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x637a81e4, "nf_ct_expect_put" },
	{ 0xe7ba70e0, "nf_ct_expect_alloc" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0xe2155131, "nf_conntrack_helpers_unregister" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xede76444, "nf_ct_helper_log" },
	{ 0x714153ee, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");

