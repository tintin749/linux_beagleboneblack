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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xb266e265, "___pskb_trim" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x9d669763, "memcpy" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0x5b0089f1, "nf_queue_entry_free" },
	{ 0x780ec882, "nf_queue_entry_get_refs" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xdfb957d8, "__skb_gso_segment" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x50992cef, "try_module_get" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xaf41cf68, "nf_unregister_queue_handler" },
	{ 0x6f9ec463, "nf_register_queue_handler" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0x5f754e5a, "memset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f7d1c24, "nfnetlink_unicast" },
	{ 0xd99129b5, "from_kgid_munged" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0x24488c8f, "skb_checksum_help" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xa3be7344, "skb_zerocopy_headlen" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92ec09d5, "skb_tx_error" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb8f223e6, "skb_zerocopy" },
	{ 0x738c0b10, "skb_put" },
	{ 0xf687108, "nla_put" },
	{ 0xdbd5011f, "__nla_reserve" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xc55f38bb, "nfnl_ct_hook" },
	{ 0xe864a95a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x29d593ff, "nf_reinject" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x34181170, "nf_ct_hook" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nfnetlink");

