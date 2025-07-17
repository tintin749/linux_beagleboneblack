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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x81fed507, "release_sock" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0x6ac0221, "send_sig" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0x24ed09b4, "sock_rfree" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x98ab2d84, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xc2c4875, "__skb_wait_for_more_packets" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x951425dc, "sk_free" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x65c57ee7, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd216a0aa, "__dev_get_by_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd3fb021, "__skb_try_recv_datagram" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");

