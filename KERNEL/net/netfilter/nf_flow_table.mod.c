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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0xa7b3181c, "up_read" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0x734e2dc, "nf_ct_l4proto_find" },
	{ 0xac0af05c, "dst_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4e2f2b4c, "nf_ct_acct_add" },
	{ 0x44237e70, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf17522ca, "inet_proto_csum_replace16" },
	{ 0xfb1d7438, "down_read" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x8a3e0ca6, "flow_indr_dev_setup_offload" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x79876901, "flow_block_cb_free" },
	{ 0xfcd11d53, "neigh_xmit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb87e7a95, "skb_gso_validate_network_len" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x96742735, "flow_rule_alloc" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "nf_conntrack");

