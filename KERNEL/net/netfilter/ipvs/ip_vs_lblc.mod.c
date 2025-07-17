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
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1cbb4716, "unregister_ip_vs_scheduler" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xbaeaee3a, "register_ip_vs_scheduler" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfde43e11, "ip_vs_scheduler_err" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4aec65, "init_net" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
};

MODULE_INFO(depends, "ip_vs");

