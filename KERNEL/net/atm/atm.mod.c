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
	{ 0xa24f23d8, "__request_module" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6ac0221, "send_sig" },
	{ 0x682d5afa, "_proc_mkdir" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xb96022f3, "device_del" },
	{ 0x8112492b, "device_register" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xab6d656, "seq_putc" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x558e9a84, "sock_wake_async" },
	{ 0x951425dc, "sk_free" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4aec65, "init_net" },
	{ 0x929b994a, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x483a055b, "device_create_file" },
	{ 0x87048561, "__sock_recv_ts_and_drops" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x65c57ee7, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3a668897, "remove_proc_subtree" },
	{ 0x2a7d81, "proc_create_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x4fad61, "consume_skb" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
	{ 0x59161172, "skb_free_datagram" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

