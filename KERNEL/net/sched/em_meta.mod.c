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
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x37a0cba, "kfree" },
	{ 0x71c90087, "memcmp" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xf687108, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf1e98c74, "avenrun" },
};

MODULE_INFO(depends, "");

