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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xe3a24cdd, "ieee802154_hdr_push" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x5148d5eb, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x6bcf1366, "crypto_alloc_sync_skcipher" },
	{ 0x60f81cec, "ieee802154_hdr_pull" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x18c34ba0, "bpf_trace_run1" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x40193871, "netif_receive_skb" },
	{ 0xda893418, "wpan_phy_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x1db4055b, "ieee802154_hdr_peek" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4f6edebe, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0x6976dd57, "wpan_phy_unregister" },
	{ 0x8934e9c8, "ieee802154_hdr_peek_addrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cd74a1c, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0xe3264f62, "dev_alloc_name" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x4fad61, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xaffc5da3, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154");

