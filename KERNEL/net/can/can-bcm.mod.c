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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x174051d8, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xaa152108, "hrtimer_active" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0x682d5afa, "_proc_mkdir" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xb7715bb4, "can_proto_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x62e4a358, "proc_create_net_single" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xab6d656, "seq_putc" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x951425dc, "sk_free" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xcbbed733, "can_send" },
	{ 0x87048561, "__sock_recv_ts_and_drops" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x8975cd22, "can_proto_register" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfcec5906, "can_rx_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");

