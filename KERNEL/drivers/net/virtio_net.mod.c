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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x926142b5, "passthru_features_check" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x467a87d, "__cpuhp_remove_state" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0x9fc791a3, "__cpuhp_setup_state" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0xc5850110, "printk" },
	{ 0x8bdb466f, "xdp_convert_zc_to_xdp_frame" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x893d2ae4, "skb_coalesce_rx_frag" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3bc45e6a, "__traceiter_xdp_exception" },
	{ 0xd1f58915, "virtqueue_get_buf_ctx" },
	{ 0x6f540883, "build_skb" },
	{ 0xfffca83e, "xdp_do_redirect" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xd653b126, "sched_clock" },
	{ 0x2dc996e3, "__skb_flow_dissect" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c1eec49, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0xabc1c505, "napi_gro_receive" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x2c2ddc9f, "skb_partial_csum_set" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x738c0b10, "skb_put" },
	{ 0x9958194a, "__napi_alloc_skb" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x82a25105, "net_failover_create" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x40191046, "xdp_rxq_info_reg_mem_model" },
	{ 0x29fc7f52, "xdp_rxq_info_reg" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xdfd74bf2, "virtqueue_add_inbuf_ctx" },
	{ 0xda22183a, "skb_page_frag_refill" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x43145f74, "page_address" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x6bb0f2e7, "net_failover_destroy" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x4fad61, "consume_skb" },
	{ 0xeac16fb4, "virtqueue_detach_unused_buf" },
	{ 0x91452968, "_dev_err" },
	{ 0xf07cb710, "bpf_prog_put" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x809f811b, "bpf_prog_sub" },
	{ 0xa10d72e4, "bpf_prog_add" },
	{ 0x1cce99e, "eth_commit_mac_addr_change" },
	{ 0xaa8d89f4, "eth_prepare_mac_addr_change" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc602e74a, "softnet_data" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xab7dd468, "virtqueue_enable_cb_delayed" },
	{ 0xca3a2170, "skb_tstamp_tx" },
	{ 0xbf7e42b0, "skb_to_sgvec" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x208ac5ce, "skb_clone_tx_timestamp" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x82466336, "netif_set_real_num_rx_queues" },
	{ 0xdda6b44f, "netif_set_real_num_tx_queues" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x27ca2f43, "netdev_notify_peers" },
	{ 0x669f8c58, "netif_tx_stop_all_queues" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xa81d390b, "virtqueue_is_broken" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x1737b345, "virtqueue_add_sgs" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0xb484f75b, "__netif_set_xps_queue" },
	{ 0xbe86e7fc, "cpumask_next_wrap" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x945c707, "netif_schedule_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x92b57248, "flush_work" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6f14a443, "ethtool_virtdev_set_link_ksettings" },
	{ 0xb767d8f9, "xdp_rxq_info_unreg" },
	{ 0x70351a34, "napi_disable" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xb54bba5d, "__cpuhp_state_remove_instance" },
	{ 0xb7aefc55, "__cpuhp_state_add_instance" },
	{ 0x37a0cba, "kfree" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x57822f50, "virtqueue_notify" },
	{ 0x4cc1b1b2, "virtqueue_kick_prepare" },
	{ 0x79ec657e, "xdp_return_frame_rx_napi" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xf6e100d0, "virtqueue_poll" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0xbb21b923, "virtqueue_enable_cb_prepare" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb5a25f65, "xdp_return_frame" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0xb4e02369, "napi_consume_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000001v*");
