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
	{ 0x5298fff7, "sock_set_keepalive" },
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x575aa308, "sock_no_linger" },
	{ 0x92b57248, "flush_work" },
	{ 0x81fed507, "release_sock" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xca33a866, "rds_trans_register" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x2211767b, "sock_create_lite" },
	{ 0xfafcf341, "ipv6_chk_addr" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xa4150c26, "rds_conn_path_drop" },
	{ 0xf7cd5fec, "tcp_sock_set_nodelay" },
	{ 0x6c1ce33, "tcp_sock_set_keepidle" },
	{ 0x761d04d1, "sock_release" },
	{ 0x8e8475e0, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0xe4a6c8f6, "rds_send_ping" },
	{ 0xacc03a7, "rds_conn_create" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xebc3746c, "rds_recv_incoming" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xa4628bdc, "rds_connect_path_complete" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x35fc9e3f, "pskb_extract" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc0a6711d, "inet_addr_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x89b45a26, "rds_info_register_func" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2b929aa5, "rds_inc_put" },
	{ 0xf4c257e8, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x4526036d, "rds_send_path_drop_acked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb4aec65, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfab1f682, "rds_conn_destroy" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xd653b126, "sched_clock" },
	{ 0xce0e8472, "tcp_sock_set_keepcnt" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xae44eae7, "rds_info_deregister_func" },
	{ 0xc6eb35f5, "rds_trans_unregister" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x1b584fe0, "rds_conn_path_connect_if_down" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x2a0c46e0, "tcp_read_sock" },
	{ 0xa19b2008, "rds_send_path_reset" },
	{ 0x4e630478, "tcp_sock_set_cork" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1d3ecf6a, "rds_cong_map_updated" },
	{ 0x200b2041, "in6addr_any" },
	{ 0x7bbc7c35, "tcp_sock_set_keepintvl" },
};

MODULE_INFO(depends, "rds");

