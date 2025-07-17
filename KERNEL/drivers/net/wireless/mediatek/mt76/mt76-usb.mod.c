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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xbf7e42b0, "skb_to_sgvec" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43145f74, "page_address" },
	{ 0xeaa6c550, "usb_init_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xa1e4a560, "mt76_rx_poll_complete" },
	{ 0x8031f1ba, "__page_frag_cache_drain" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x94c7cc09, "mt76_queue_tx_complete" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xdaeb1edc, "usb_unpoison_urb" },
	{ 0x5969778, "trace_event_reg" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x91452968, "_dev_err" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6f540883, "build_skb" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x929c8c9, "kthread_unpark" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x979bc35d, "mt76_txq_schedule" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0x3066972, "wake_up_process" },
	{ 0x8ac5253e, "mt76_tx_status_check" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x370c4fb3, "kthread_park" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbfe597af, "mt76_has_tx_pending" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x769eabc0, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76,mac80211");

