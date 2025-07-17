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
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0xc00b8dd3, "hid_add_device" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xebecb64d, "hid_ignore" },
	{ 0xa7b3181c, "up_read" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa1f3c5e4, "hid_parse_report" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf0ce9053, "bt_sock_register" },
	{ 0xeea0399, "strscpy" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x27a46ba, "hid_input_report" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf144f336, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x141e0b83, "sock_no_recvmsg" },
	{ 0x3f97df8e, "bt_sock_unlink" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x804e2133, "l2cap_conn_put" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6b073a0a, "l2cap_is_socket" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xb4aec65, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7bcf8005, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xc4c3c35d, "bt_sock_link" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0x20a70117, "l2cap_register_user" },
	{ 0x72aa3622, "__module_put_and_exit" },
	{ 0x3066972, "wake_up_process" },
	{ 0x23fbf001, "hid_destroy_device" },
	{ 0x4cb4f1bd, "hid_allocate_device" },
	{ 0x5be86d08, "l2cap_conn_get" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x6cfbca92, "sock_no_sendmsg" },
	{ 0x1ce11ad8, "set_user_nice" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x574cb590, "bt_procfs_init" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x21f52da8, "bt_procfs_cleanup" },
	{ 0x4dec6038, "memscan" },
	{ 0xa22a68d9, "l2cap_unregister_user" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "A97A6F2E6B129284577EB64");
