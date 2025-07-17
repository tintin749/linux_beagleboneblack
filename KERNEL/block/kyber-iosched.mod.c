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
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x8967ed9d, "blk_mq_debugfs_rq_show" },
	{ 0xa36cad5, "elv_unregister" },
	{ 0x23ab0f34, "elv_register" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb19c7d56, "sbitmap_queue_resize" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x5f754e5a, "memset" },
	{ 0x22f1cf5a, "blk_mq_sched_request_inserted" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xb7279c75, "sbitmap_queue_min_shallow_depth" },
	{ 0x1b4c378f, "sbitmap_init_node" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa98664c6, "sbitmap_add_wait_queue" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc5a387f0, "__sbitmap_queue_get" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x56c87b84, "kobject_put" },
	{ 0x85c04dca, "blk_stat_enable_accounting" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x358e7ae5, "sbitmap_queue_init_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x227d70c3, "elevator_alloc" },
	{ 0x8341e6bf, "blk_mq_run_hw_queue" },
	{ 0x47664a52, "sbitmap_del_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d73c5a4, "blk_bio_list_merge" },
	{ 0xf9740f48, "sbitmap_queue_clear" },
	{ 0x7ec835a7, "sbitmap_any_bit_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x31861022, "sbitmap_queue_show" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0xc6f4ca1, "bpf_trace_run7" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

