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
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xb8ea55c, "register_pppox_proto" },
	{ 0x86cb1e85, "proto_register" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xc34820f1, "ppp_register_net_channel" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x916c85bf, "ppp_input" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x75a38389, "skb_clone" },
	{ 0xedf1abc2, "__sk_receive_skb" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0x5f754e5a, "memset" },
	{ 0x850d6f6d, "dev_get_by_name_rcu" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x951425dc, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x54554bb4, "pppox_unbind_sock" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x81fed507, "release_sock" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x738c0b10, "skb_put" },
	{ 0xaacf876, "sock_wmalloc" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4fad61, "consume_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xd73f4af1, "sk_alloc" },
};

MODULE_INFO(depends, "pppox,ppp_generic");

