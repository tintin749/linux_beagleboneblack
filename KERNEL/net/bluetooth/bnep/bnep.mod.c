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
	{ 0xf2af389d, "sock_init_data" },
	{ 0xa7b3181c, "up_read" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xf0ce9053, "bt_sock_register" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x141e0b83, "sock_no_recvmsg" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x3f97df8e, "bt_sock_unlink" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0x6b073a0a, "l2cap_is_socket" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xb4aec65, "init_net" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7bcf8005, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xc4c3c35d, "bt_sock_link" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x72aa3622, "__module_put_and_exit" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x943dc8aa, "crc32_be" },
	{ 0x6cfbca92, "sock_no_sendmsg" },
	{ 0x1ce11ad8, "set_user_nice" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x574cb590, "bt_procfs_init" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x21f52da8, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "29C0EFD462D8398C4B907B5");
