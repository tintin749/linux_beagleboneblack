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
	{ 0xf454a082, "tcf_unregister_action" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x47a25702, "rhashtable_destroy" },
	{ 0xfe7131b4, "tcf_register_action" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6d0c821b, "nf_ct_delete" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f03d5a6, "__nf_conntrack_confirm" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9ed3cae8, "flow_offload_free" },
	{ 0x5bba009a, "flow_offload_add" },
	{ 0x664c02c3, "flow_offload_alloc" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe95c9f92, "nf_connlabels_replace" },
	{ 0x447a76ec, "nf_ct_nat_ext_add" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0xa051cb49, "nf_conntrack_in" },
	{ 0x466388e1, "flow_offload_teardown" },
	{ 0xd04e85f2, "ip_defrag" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xb59aa31a, "nf_ct_deliver_cached_events" },
	{ 0x6467a8ee, "nf_ct_frag6_gather" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0x4e2f2b4c, "nf_ct_acct_add" },
	{ 0xff2ab75b, "flow_offload_refresh" },
	{ 0x4ebac21e, "flow_offload_lookup" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x2716065f, "tcf_action_set_ctrlact" },
	{ 0xd9d998ca, "tcf_idr_cleanup" },
	{ 0xc8655f4c, "tcf_idr_create_from_flags" },
	{ 0xde655d5d, "tcf_idr_release" },
	{ 0xb3113b88, "tcf_chain_put_by_act" },
	{ 0x272732ba, "nf_ct_tmpl_alloc" },
	{ 0xf33edf4c, "tcf_action_check_ctrlact" },
	{ 0xb05c583c, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x2d68d32f, "nf_flow_table_init" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xf02a6977, "queue_rcu_work" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x71c90087, "memcmp" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x89691d49, "nf_nat_icmpv6_reply_translation" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x204833c2, "nf_nat_setup_info" },
	{ 0xa2c9756, "nf_nat_icmp_reply_translation" },
	{ 0x94231264, "nf_nat_packet" },
	{ 0xe9e8c3e8, "nf_nat_alloc_null_binding" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xc5850110, "printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37c1a199, "nf_connlabels_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf687108, "nla_put" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x33490561, "tcf_idr_search" },
	{ 0xe864a95a, "module_put" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x79876901, "flow_block_cb_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4253aa7e, "down_write" },
	{ 0x6601bbad, "nf_flow_table_free" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8998b88d, "tcf_generic_walker" },
	{ 0x7350189d, "tcf_action_update_stats" },
	{ 0x37a0cba, "kfree" },
	{ 0xcee57379, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6a571da1, "nf_connlabels_put" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nf_conntrack,nf_flow_table,nf_nat,nf_defrag_ipv6");

