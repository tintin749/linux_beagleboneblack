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
	{ 0x89b799a6, "neigh_lookup" },
	{ 0x9e0802cd, "inet_frag_kill" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xac0af05c, "dst_release" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x48427c2e, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x7daf3b37, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x243a6eb8, "inet_frag_find" },
	{ 0x3632dc14, "inet_frag_reasm_prepare" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x8ffb6e83, "inet_frags_fini" },
	{ 0x1db4055b, "ieee802154_hdr_peek" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0x60199663, "nd_tbl" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x202bc90f, "lowpan_header_decompress" },
	{ 0xe1f25ec7, "fqdir_init" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3421cc94, "inet_frag_reasm_finish" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x10458581, "inet_frag_destroy" },
	{ 0xf93bf427, "lowpan_unregister_netdevice" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x8934e9c8, "ieee802154_hdr_peek_addrs" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x294a4889, "lowpan_register_netdevice" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x862f7020, "inet_frags_init" },
	{ 0x7a7a64b3, "inet_frag_queue_insert" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x738c0b10, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154");

