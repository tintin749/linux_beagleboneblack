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
	{ 0x81fed507, "release_sock" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xa8f7f280, "idr_get_next_ul" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16dc7961, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x761d04d1, "sock_release" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7a4d398a, "inet6_csk_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb3e27ae, "udp_sock_create6" },
	{ 0x8c302cf0, "setup_udp_tunnel_sock" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d1c7697, "kernel_connect" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x18c34ba0, "bpf_trace_run1" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x951425dc, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7bcf8005, "fput" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa346975c, "idr_remove" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0xb30c5766, "udp_set_csum" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x5736af75, "kernel_bind" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xba632071, "udp_sock_create4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8fef6811, "ip_queue_xmit" },
	{ 0x47925794, "idr_find" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "D131D2F101ECA73E4757E91");
