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
	{ 0x1cbb4716, "unregister_ip_vs_scheduler" },
	{ 0xbaeaee3a, "register_ip_vs_scheduler" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfde43e11, "ip_vs_scheduler_err" },
};

MODULE_INFO(depends, "ip_vs");

