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
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc55f38bb, "nfnl_ct_hook" },
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0x2caab872, "nf_ct_iterate_cleanup_net" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5b21a8da, "nfnetlink_send" },
	{ 0xdf3542a9, "nfnetlink_set_err" },
	{ 0xc0109dd2, "nfnetlink_has_listeners" },
	{ 0xe13b2e5b, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x6b501f, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfccd5933, "__nf_ct_expect_find" },
	{ 0x6d0c821b, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x473e385d, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x8c6e11f4, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x399cf715, "nf_ct_get_id" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x97255bdf, "strlen" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xdcf23961, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x930b857b, "nf_conntrack_find_get" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
	{ 0xdd3bf14a, "__nf_ct_try_assign_helper" },
	{ 0x62e99954, "nf_conntrack_free" },
	{ 0xf4271b43, "nf_ct_helper_ext_add" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91cd3ef8, "nf_conntrack_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xaed03a3f, "nf_ct_unlink_expect_report" },
	{ 0x70f9ead7, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0xb63194df, "nf_ct_expect_find_get" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0x22a929e, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xe7ba70e0, "nf_ct_expect_alloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c3a6db4, "__nf_conntrack_helper_find" },
	{ 0xb69b5854, "nf_ct_remove_expectations" },
	{ 0x71c90087, "memcmp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xf687108, "nla_put" },
	{ 0x17ddc3fc, "__do_once_done" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0x91a9c232, "__siphash_unaligned" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa5f9bcf6, "nf_nat_hook" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xec861f3f, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0x8c57d5d5, "nf_ct_expect_register_notifier" },
	{ 0x5a8a2252, "nf_conntrack_register_notifier" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc20514d7, "nf_conntrack_unregister_notifier" },
	{ 0xdc8ab207, "nf_ct_expect_unregister_notifier" },
	{ 0x734e2dc, "nf_ct_l4proto_find" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0xe95c9f92, "nf_connlabels_replace" },
	{ 0x637a81e4, "nf_ct_expect_put" },
	{ 0xdbe4c906, "nf_ct_tcp_seqadj_set" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");

