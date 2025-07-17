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
	{ 0x2d3385d3, "system_wq" },
	{ 0x81fed507, "release_sock" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd52c1456, "vsock_assign_transport" },
	{ 0x54749bf0, "vsock_create_connected" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0x41e097ef, "vsock_stream_has_space" },
	{ 0x55b8e1a2, "vsock_core_get_transport" },
	{ 0xceff0f13, "bpf_trace_run10" },
	{ 0x5f754e5a, "memset" },
	{ 0xdf729618, "vsock_find_connected_socket" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x1496ec56, "vsock_stream_has_data" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x951425dc, "sk_free" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x62701bcd, "vsock_find_bound_socket" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcf743998, "bpf_trace_run8" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x2ce08299, "vsock_deliver_tap" },
	{ 0xde861d0f, "vsock_remove_sock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x738c0b10, "skb_put" },
	{ 0x3370f4a1, "vsock_insert_connected" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd02f9c7, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");

