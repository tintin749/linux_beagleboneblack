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
	{ 0x708500ec, "sbc_get_device_type" },
	{ 0x692a30b2, "target_backend_unregister" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x9ed4a18, "root_device_unregister" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x8f0d477c, "transport_backend_register" },
	{ 0x331ef04b, "passthrough_pr_attrib_attrs" },
	{ 0x35927c78, "passthrough_attrib_attrs" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x6eb21db9, "__root_device_register" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x519486c3, "unmap_mapping_range" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0xd14235e0, "transport_copy_sense_to_cmd" },
	{ 0x71ebc2bd, "target_complete_cmd_with_length" },
	{ 0x2ebab094, "target_complete_cmd" },
	{ 0xa346975c, "idr_remove" },
	{ 0x779e851f, "uio_event_notify" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x42d0ee12, "uio_unregister_device" },
	{ 0xb2a87625, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x999e8297, "vfree" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf687108, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xfffa3100, "sg_next" },
	{ 0x43145f74, "page_address" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x9d669763, "memcpy" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xc37335b0, "complete" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xc8aef1a6, "genlmsg_multicast_allns" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7429e20c, "kstrtos8" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x949633ee, "passthrough_parse_cdb" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "target_core_mod,uio");

