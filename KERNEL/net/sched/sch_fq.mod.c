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
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xfb652520, "qdisc_watchdog_init_clockid" },
	{ 0xc5850110, "printk" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f754e5a, "memset" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf687108, "nla_put" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9f591f97, "kmem_cache_free_bulk" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

