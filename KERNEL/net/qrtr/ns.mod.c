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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0x97255bdf, "strlen" },
	{ 0x761d04d1, "sock_release" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92dc3f16, "radix_tree_iter_resume" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x88f2f017, "kernel_getsockname" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7a3e8a42, "radix_tree_next_chunk" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb4aec65, "init_net" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x1381c77f, "kernel_recvmsg" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x37a0cba, "kfree" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x5736af75, "kernel_bind" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0xaffc5da3, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

