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
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8d733624, "xt_request_find_match" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf687108, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xebce4e20, "xt_check_match" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xe864a95a, "module_put" },
};

MODULE_INFO(depends, "");

