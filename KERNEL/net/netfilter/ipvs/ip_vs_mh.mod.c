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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1cbb4716, "unregister_ip_vs_scheduler" },
	{ 0xbaeaee3a, "register_ip_vs_scheduler" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xea124bd1, "gcd" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xfde43e11, "ip_vs_scheduler_err" },
	{ 0x522fb0e4, "__hsiphash_unaligned" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "ip_vs");

