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
	{ 0x65ac725f, "register_qdisc" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x40b8f71f, "skb_get_hash_perturb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf687108, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

