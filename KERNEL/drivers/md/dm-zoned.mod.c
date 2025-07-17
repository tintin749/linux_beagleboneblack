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
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xeb55f21e, "fs_bio_set" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe9a08116, "blkdev_report_zones" },
	{ 0xba140f6d, "submit_bio_wait" },
	{ 0xa7b3181c, "up_read" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0x43145f74, "page_address" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x79bd15d4, "blk_limits_io_opt" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xddc7a133, "blkdev_issue_flush" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x2bff5887, "xa_destroy" },
	{ 0x7c06cea1, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4c01811a, "bio_advance" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0xc51eddd4, "dm_table_device_name" },
	{ 0x9d9911ae, "dm_kcopyd_copy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x8456e9a7, "xa_erase" },
	{ 0x72d6a8e3, "blk_limits_io_min" },
	{ 0x3c8f6ef0, "__xa_insert" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0x280866c7, "zero_fill_bio_iter" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xeaf30af, "bio_clone_fast" },
	{ 0xed0dede1, "blkdev_issue_zeroout" },
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0xcb606eb9, "xa_load" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0x6347906d, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2ea9123e, "bioset_exit" },
	{ 0xe17242bd, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xfdf58216, "unregister_shrinker" },
	{ 0x5e4aff10, "bdevname" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6dd7de8f, "dm_accept_partial_bio" },
	{ 0x37bc5c16, "blkdev_zone_mgmt" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x64d03ddd, "register_shrinker" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x5803157e, "blkdev_nr_zones" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");

