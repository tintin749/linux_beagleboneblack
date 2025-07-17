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
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x83d2a225, "single_open" },
	{ 0x31981d17, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43145f74, "page_address" },
	{ 0xd7b5627, "firmware_request_cache" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x29762e0c, "single_release" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x1b206cd0, "seq_read" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0x10225b13, "ieee80211_tx_status" },
	{ 0x584c7a2d, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb5a19e2f, "bpf_trace_run9" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x5969778, "trace_event_reg" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xab6d656, "seq_putc" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x531c4f62, "ieee80211_send_bar" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x2ac7a090, "ieee80211_get_tx_rates" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0xdb3bcaf4, "ieee80211_tx_status_ext" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xaffc5da3, "bpf_trace_run4" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");
