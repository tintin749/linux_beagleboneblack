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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x174051d8, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xb7715bb4, "can_proto_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x1d6e5744, "__sock_recv_wifi_status" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xda5e80d8, "__sock_recv_timestamp" },
	{ 0xcbbed733, "can_send" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x8975cd22, "can_proto_register" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfcec5906, "can_rx_unregister" },
	{ 0x738c0b10, "skb_put" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");

