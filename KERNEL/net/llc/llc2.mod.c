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
	{ 0xf2af389d, "sock_init_data" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xe3e5577c, "dev_getbyhwaddr_rcu" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x8928a3ae, "skb_set_owner_w" },
	{ 0x24ed09b4, "sock_rfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8bba90ea, "skb_unlink" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xb47473cf, "sk_wait_data" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xa6f12208, "llc_set_station_handler" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x2820969, "ns_capable" },
	{ 0x52d7b2fd, "llc_sap_list" },
	{ 0xc74ecf7e, "llc_mac_hdr_init" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x951425dc, "sk_free" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x38b92846, "llc_remove_pack" },
	{ 0x89cec530, "llc_sap_find" },
	{ 0xb4aec65, "init_net" },
	{ 0x5cf817a6, "llc_add_pack" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
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
	{ 0x3459bf35, "llc_sap_open" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3e2dd29, "llc_sap_close" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x738c0b10, "skb_put" },
	{ 0xdd1effdb, "llc_build_and_send_ui_pkt" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x500fe26a, "sock_i_uid" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "llc");

