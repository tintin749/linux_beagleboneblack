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
	{ 0xcefdd7b8, "tcf_classify" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0x7d6f1dc3, "gen_new_estimator" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xfcc63630, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xee02a44f, "gen_replace_estimator" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x1aba9ae5, "tcf_block_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x596dcfeb, "gnet_stats_copy_rate_est" },
	{ 0x4609563c, "gnet_stats_copy_basic" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0xb182cfa5, "pfifo_qdisc_ops" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x65080188, "tcf_block_get" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

