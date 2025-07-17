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
	{ 0xb7a98068, "dev_load" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe3e5577c, "dev_getbyhwaddr_rcu" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x4edb0078, "sk_common_release" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xccc4c9f2, "sock_common_recvmsg" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x60f81cec, "ieee802154_hdr_pull" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x2820969, "ns_capable" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xf1ff95ca, "sock_prot_inuse_add" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4aec65, "init_net" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x87048561, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x65c57ee7, "sock_register" },
	{ 0x2a34aa19, "dev_getfirstbyhwtype" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xe5c1f5eb, "put_cmsg" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xedab2dc5, "sock_common_setsockopt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x832849f8, "sock_common_getsockopt" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");

