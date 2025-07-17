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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0xcefdd7b8, "tcf_classify" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x7d6f1dc3, "gen_new_estimator" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0xfcc63630, "qdisc_class_hash_grow" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xee02a44f, "gen_replace_estimator" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xc5850110, "printk" },
	{ 0x162e2f8b, "qdisc_warn_nonwc" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0xb182cfa5, "pfifo_qdisc_ops" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x596dcfeb, "gnet_stats_copy_rate_est" },
	{ 0x4609563c, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xf687108, "nla_put" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x65080188, "tcf_block_get" },
	{ 0xd757267c, "qdisc_watchdog_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x1aba9ae5, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x37b2b4f6, "__netif_schedule" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

