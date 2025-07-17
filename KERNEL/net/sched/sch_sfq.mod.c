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
	{ 0xb43f9365, "ktime_get" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x65080188, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x40b8f71f, "skb_get_hash_perturb" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0xcefdd7b8, "tcf_classify" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1aba9ae5, "tcf_block_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

