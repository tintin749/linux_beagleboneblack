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
	{ 0xb5853740, "tcf_em_unregister" },
	{ 0xb24a89d2, "tcf_em_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1a68dfee, "ip_set_test" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xa432b3ed, "ip_set_nfnl_get_byindex" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xc142ecb1, "ip_set_nfnl_put" },
};

MODULE_INFO(depends, "ip_set");

