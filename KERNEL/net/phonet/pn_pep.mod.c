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
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x81fed507, "release_sock" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb316df33, "pn_sock_unhash" },
	{ 0x247206, "sk_stream_wait_connect" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0x9ae0317f, "pn_sock_hash" },
	{ 0xf475a403, "phonet_proto_register" },
	{ 0x24ed09b4, "sock_rfree" },
	{ 0x4edb0078, "sk_common_release" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x89e77e92, "pn_sock_get_port" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x951425dc, "sk_free" },
	{ 0xedf1abc2, "__sk_receive_skb" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0x85365959, "phonet_proto_unregister" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xe967d3a1, "pn_skb_send" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x68b46f33, "phonet_stream_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "phonet");

