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
	{ 0x38a9e7ab, "nf_log_unregister" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0x427f8a19, "nf_log_register" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x97255bdf, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x50992cef, "try_module_get" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa1fd9548, "nf_log_bind_pf" },
	{ 0xc55f38bb, "nfnl_ct_hook" },
	{ 0x3f163b71, "nf_log_unbind_pf" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x41bcd625, "proc_set_user" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x75eb8dcb, "nf_log_unset" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xd99129b5, "from_kgid_munged" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x738c0b10, "skb_put" },
	{ 0xf687108, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9f7d1c24, "nfnetlink_unicast" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x73e5201a, "__put_net" },
	{ 0xe864a95a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nfnetlink");

