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
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x6cf0bcd9, "ip_getsockopt" },
	{ 0xff6f89d0, "ip_setsockopt" },
	{ 0x9f979580, "sk_setup_caps" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xc2af2a7d, "l2tp_recv_common" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0x957e6251, "inet_sendmsg" },
	{ 0xdea41ba9, "inet_del_protocol" },
	{ 0x4edb0078, "sk_common_release" },
	{ 0x90824d48, "inet_dgram_connect" },
	{ 0xccc4c9f2, "sock_common_recvmsg" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x1d6e5744, "__sock_recv_wifi_status" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc0a6711d, "inet_addr_type" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0xf9a16bf3, "inet_shutdown" },
	{ 0xf9fc78f9, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xda5e80d8, "__sock_recv_timestamp" },
	{ 0x42896fe3, "inet_ioctl" },
	{ 0xedf1abc2, "__sk_receive_skb" },
	{ 0xf92ca7ac, "ip_cmsg_recv_offset" },
	{ 0x86cb1e85, "proto_register" },
	{ 0x551cab92, "__sk_dst_check" },
	{ 0x6632c7f1, "inet_release" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0xedab2dc5, "sock_common_setsockopt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x4ad8c4fc, "__xfrm_policy_check" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xff083f7a, "inet_register_protosw" },
	{ 0x7ce49b54, "__udp_disconnect" },
	{ 0x253108ba, "l2tp_tunnel_delete" },
	{ 0x871f2038, "inet_bind" },
	{ 0x832849f8, "sock_common_getsockopt" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xdb882184, "__ip4_datagram_connect" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaacf876, "sock_wmalloc" },
	{ 0xee957d29, "l2tp_session_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x738c0b10, "skb_put" },
	{ 0x8fef6811, "ip_queue_xmit" },
	{ 0xb85df782, "l2tp_sk_to_tunnel" },
	{ 0xf64c5f36, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "E42038509C1E95EAF2E7E58");
