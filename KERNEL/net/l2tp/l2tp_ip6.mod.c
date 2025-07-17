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
	{ 0x1fbaa9ab, "ipv6_getsockopt" },
	{ 0xb1feb9e4, "ipv6_setsockopt" },
	{ 0x75aa5a2d, "l2tp_ioctl" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xccc4c9f2, "sock_common_recvmsg" },
	{ 0x957e6251, "inet_sendmsg" },
	{ 0x832849f8, "sock_common_getsockopt" },
	{ 0xedab2dc5, "sock_common_setsockopt" },
	{ 0xf9a16bf3, "inet_shutdown" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0x91ad6797, "inet6_ioctl" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x90824d48, "inet_dgram_connect" },
	{ 0xc73a97a1, "inet6_bind" },
	{ 0x98878dd3, "inet6_release" },
	{ 0x4400f3a4, "inet6_del_protocol" },
	{ 0x8516b16c, "inet6_unregister_protosw" },
	{ 0x28758d0f, "inet6_register_protosw" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0x57011cd9, "inet6_add_protocol" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x38aa35d5, "ip6_dst_hoplimit" },
	{ 0x1c177b7d, "__fl6_sock_lookup" },
	{ 0x5ca2e2bc, "ip6_push_pending_frames" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x41776c14, "ipv6_flowlabel_exclusive" },
	{ 0xac0af05c, "dst_release" },
	{ 0x3e49dfd4, "ip6_append_data" },
	{ 0x80347b93, "ip_generic_getfrag" },
	{ 0xae7fff01, "ip6_dst_lookup_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0xfed1c2d9, "fl6_merge_options" },
	{ 0x84a2460a, "ip6_datagram_send_ctl" },
	{ 0x5f754e5a, "memset" },
	{ 0x951425dc, "sk_free" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xedf1abc2, "__sk_receive_skb" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0xc2af2a7d, "l2tp_recv_common" },
	{ 0xee957d29, "l2tp_session_get" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0xfafcf341, "ipv6_chk_addr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4edb0078, "sk_common_release" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xb73e2a4, "__ip6_datagram_connect" },
	{ 0x7ce49b54, "__udp_disconnect" },
	{ 0x3f3db15e, "inet6_destroy_sock" },
	{ 0x253108ba, "l2tp_tunnel_delete" },
	{ 0x81fed507, "release_sock" },
	{ 0xb0a316b1, "ip6_flush_pending_frames" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xb85df782, "l2tp_sk_to_tunnel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1d6e5744, "__sock_recv_wifi_status" },
	{ 0x81e04a04, "ip6_datagram_recv_ctl" },
	{ 0xda5e80d8, "__sock_recv_timestamp" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc06208d0, "ipv6_recv_error" },
	{ 0x59161172, "skb_free_datagram" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "24268C1612F2D1FA43BAF05");
