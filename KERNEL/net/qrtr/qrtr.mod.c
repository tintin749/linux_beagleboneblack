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
	{ 0xf2af389d, "sock_init_data" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf3a11c35, "xa_find_after" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0x75a38389, "skb_clone" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0x16525cc4, "xa_find" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0x8456e9a7, "xa_erase" },
	{ 0x3c8f6ef0, "__xa_insert" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0xb7362c90, "do_wait_intr_irq" },
	{ 0xcb606eb9, "xa_load" },
	{ 0x636a2832, "qrtr_ns_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7a3e8a42, "radix_tree_next_chunk" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xb4b1e6d1, "__xa_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x65c57ee7, "sock_register" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xe3482046, "radix_tree_iter_delete" },
	{ 0x8d25501f, "qrtr_ns_remove" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1b30cb84, "refcount_dec_and_mutex_lock" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "ns");

