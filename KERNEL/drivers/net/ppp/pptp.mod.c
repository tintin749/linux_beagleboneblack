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
	{ 0x141e0b83, "sock_no_recvmsg" },
	{ 0x6cfbca92, "sock_no_sendmsg" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe5391e6f, "pppox_ioctl" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0x9a06c2c6, "gre_del_protocol" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xb8ea55c, "register_pppox_proto" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xa07335ed, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x24653fb7, "ip_local_out" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xb65c1c10, "__ip_select_ident" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0x916c85bf, "ppp_input" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xedf1abc2, "__sk_receive_skb" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xac0af05c, "dst_release" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x951425dc, "sk_free" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x54554bb4, "pppox_unbind_sock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc5850110, "printk" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0xef5e95b3, "ppp_register_channel" },
	{ 0x9f979580, "sk_setup_caps" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81fed507, "release_sock" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
};

MODULE_INFO(depends, "pppox,gre,ppp_generic");

