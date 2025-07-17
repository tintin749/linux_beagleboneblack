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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x6c17cb0, "kernel_write" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x761d04d1, "sock_release" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xeea0399, "strscpy" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc8533486, "kernel_read" },
	{ 0x5f754e5a, "memset" },
	{ 0x8733a550, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf184b718, "iov_iter_kvec" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x93eea9e4, "from_kgid" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa220252c, "kmem_cache_create_usercopy" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7bcf8005, "fput" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa346975c, "idr_remove" },
	{ 0xe864a95a, "module_put" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe7a9defa, "sock_alloc_file" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x5736af75, "kernel_bind" },
	{ 0x9984daee, "fget" },
	{ 0xa3681163, "iov_iter_advance" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47925794, "idr_find" },
	{ 0xaffc5da3, "bpf_trace_run4" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x50992cef, "try_module_get" },
	{ 0x44b2b307, "__sock_create" },
};

MODULE_INFO(depends, "");

