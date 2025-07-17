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
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe5391e6f, "pppox_ioctl" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x10ce5f3e, "l2tp_nl_register_ops" },
	{ 0xb8ea55c, "register_pppox_proto" },
	{ 0x86cb1e85, "proto_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa793959f, "l2tp_session_set_header_len" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x738c0b10, "skb_put" },
	{ 0xaacf876, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x54554bb4, "pppox_unbind_sock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa84e6e88, "l2tp_xmit_skb" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x1b023552, "ppp_dev_name" },
	{ 0x951425dc, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7530e4f, "l2tp_session_delete" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc34820f1, "ppp_register_net_channel" },
	{ 0xac0af05c, "dst_release" },
	{ 0xddd568ea, "l2tp_session_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd4bea78b, "l2tp_session_inc_refcount" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdf61f2d8, "l2tp_session_create" },
	{ 0x253108ba, "l2tp_tunnel_delete" },
	{ 0x9788172c, "l2tp_tunnel_register" },
	{ 0xe6014796, "l2tp_tunnel_inc_refcount" },
	{ 0x97dba921, "l2tp_tunnel_create" },
	{ 0xf30cf33a, "l2tp_tunnel_get" },
	{ 0x81fed507, "release_sock" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xc5850110, "printk" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x916c85bf, "ppp_input" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe25a1c45, "l2tp_session_get_nth" },
	{ 0x56479a5d, "l2tp_tunnel_get_nth" },
	{ 0x497c068b, "l2tp_tunnel_dec_refcount" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xcb5af994, "l2tp_udp_encap_recv" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0x6e9a8ddf, "l2tp_tunnel_get_session" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "AE00F1660DE5F8B741CF374");
