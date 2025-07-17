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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x56c87b84, "kobject_put" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xbac84e67, "blk_mq_run_hw_queues" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xfd4fd8f0, "blkcg_policy_register" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb464f57, "wbt_enable_default" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x947ff4df, "elv_rb_latter_request" },
	{ 0x39edf556, "bdi_dev_name" },
	{ 0x993b03df, "percpu_counter_add_batch" },
	{ 0x16f1af89, "blkg_conf_prep" },
	{ 0x7e1f8a6e, "elv_rqhash_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xece784c2, "rb_first" },
	{ 0x7d3b183f, "elv_rb_del" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf0b7176a, "elv_rb_find" },
	{ 0x869e472b, "bio_associate_blkg_from_css" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xe6041d5e, "blk_mq_sched_try_insert_merge" },
	{ 0x12107cdd, "blkg_prfill_rwstat" },
	{ 0x227d70c3, "elevator_alloc" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa36cad5, "elv_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x2d01307f, "blkg_conf_finish" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x22f1cf5a, "blk_mq_sched_request_inserted" },
	{ 0x25690b82, "elv_rqhash_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb5797bfb, "of_css" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xafede1ba, "ioc_lookup_icq" },
	{ 0x23ab0f34, "elv_register" },
	{ 0x471953a3, "__blkg_prfill_rwstat" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xb322dc56, "blk_mq_free_request" },
	{ 0xd6164816, "blkg_rwstat_exit" },
	{ 0xc94a4254, "elv_bio_merge_ok" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x47e71831, "io_cgrp_subsys_on_dfl_key" },
	{ 0x525b193d, "blkcg_policy_unregister" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x3877c353, "blkcg_deactivate_policy" },
	{ 0x8792e1f5, "__blkg_prfill_u64" },
	{ 0x4976ed2f, "blkcg_print_blkgs" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xb7279c75, "sbitmap_queue_min_shallow_depth" },
	{ 0x2b744401, "kernfs_path_from_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xaeddc21e, "elv_rb_former_request" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2a6d1d5, "wbt_disable_default" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d5a8178, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37599d43, "blk_mq_sched_try_merge" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xeba2c527, "blkcg_activate_policy" },
	{ 0xef62ba69, "blkg_rwstat_recursive_sum" },
	{ 0x577cf1aa, "elv_rb_add" },
	{ 0x4f3ba219, "blkg_rwstat_init" },
};

MODULE_INFO(depends, "");

