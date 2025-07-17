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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x43145f74, "page_address" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xb2e5df17, "sock_gettstamp" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x75a38389, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0xd20eaabd, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xc5850110, "printk" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0xd5f0ef2e, "register_snap_client" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b9e284a, "datagram_poll" },
	{ 0x65c57ee7, "sock_register" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x53b7b2ef, "sock_alloc_send_skb" },
	{ 0xd216a0aa, "__dev_get_by_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3a668897, "remove_proc_subtree" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x7a9e2911, "unregister_snap_client" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x738c0b10, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x500fe26a, "sock_i_uid" },
	{ 0x8acce79, "dev_mc_add_global" },
	{ 0x59161172, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");

