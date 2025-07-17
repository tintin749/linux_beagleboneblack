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
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x174051d8, "can_rx_register" },
	{ 0xc2cae53e, "refcount_dec_and_lock" },
	{ 0xff966963, "netdev_notice" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xb7715bb4, "can_proto_unregister" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x92cc2dce, "netdev_alert" },
	{ 0x77cb0a33, "sock_queue_err_skb" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x29b3ab64, "sock_recv_errqueue" },
	{ 0xb9a613c6, "__kmalloc_track_caller" },
	{ 0xf687108, "nla_put" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x94519b74, "netdev_printk" },
	{ 0x951425dc, "sk_free" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xcbbed733, "can_send" },
	{ 0x87048561, "__sock_recv_ts_and_drops" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x8975cd22, "can_proto_register" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xe5c1f5eb, "put_cmsg" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x2d5b038e, "can_sock_destruct" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d5a8178, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfcec5906, "can_rx_unregister" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");

