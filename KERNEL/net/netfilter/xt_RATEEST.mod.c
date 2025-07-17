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
	{ 0xcabecdf9, "xt_unregister_target" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x7d6f1dc3, "gen_new_estimator" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x101c7c76, "xt_register_target" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x17ddc3fc, "__do_once_done" },
};

MODULE_INFO(depends, "");

