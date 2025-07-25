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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x16ce33ae, "ieee80211_csa_finish" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf81f71a7, "init_dummy_netdev" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x31981d17, "debugfs_create_u8" },
	{ 0xbe17e901, "ieee80211_sta_ps_transition" },
	{ 0x43145f74, "page_address" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96830966, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x8031f1ba, "__page_frag_cache_drain" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x44bcb069, "ieee80211_stop_queue" },
	{ 0x10225b13, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x584c7a2d, "debugfs_create_u32" },
	{ 0x5f754e5a, "memset" },
	{ 0x984c7929, "dma_sync_single_for_cpu" },
	{ 0x74017c9d, "ieee80211_tx_dequeue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x72caff94, "ieee80211_free_txskb" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb928f48c, "mtd_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe53b6547, "put_mtd_device" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xcb773c9c, "wiphy_read_of_freq_limits" },
	{ 0x3f060887, "__ioread32_copy" },
	{ 0x5998a9aa, "ieee80211_sta_pspoll" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x57a89899, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8af40b18, "ieee80211_next_txq" },
	{ 0x24d9c62e, "ieee80211_find_sta_by_ifaddr" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2aa4ad29, "ieee80211_calc_rx_airtime" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0x4db8b9a9, "debugfs_create_file_unsafe" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4209314f, "of_find_node_by_phandle" },
	{ 0x7513b5ec, "__iowrite32_copy" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x6f540883, "build_skb" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x62f3ba5e, "of_get_mac_address" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x45993567, "debugfs_create_devm_seqfile" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaf541e2c, "ieee80211_sta_uapsd_trigger" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x183dcd3b, "ieee80211_get_key_rx_seq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x531c4f62, "ieee80211_send_bar" },
	{ 0x2ac7a090, "ieee80211_get_tx_rates" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0x12c329e, "dma_map_page_attrs" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0x3066972, "wake_up_process" },
	{ 0x9b126258, "of_get_property" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xcb773513, "sched_set_fifo_low" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x370c4fb3, "kthread_park" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x333b4d3d, "get_mtd_device_nm" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xdfd63737, "ieee80211_sta_eosp" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xdd8ed695, "__ieee80211_create_tpt_led_trigger" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0xa938b2b8, "debugfs_create_blob" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x9d832a70, "dma_sync_single_for_device" },
	{ 0xba4db461, "ieee80211_txq_schedule_start" },
	{ 0x4676ae5a, "dma_unmap_page_attrs" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x49970de8, "finish_wait" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa17fc532, "dmam_alloc_attrs" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xcd33c764, "__ieee80211_schedule_txq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x8d7f95fd, "ieee80211_sta_register_airtime" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

