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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xcdb41c13, "unregister_md_personality" },
	{ 0x7b43303, "register_md_personality" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x22cf1453, "md_bitmap_close_sync" },
	{ 0xc62bb535, "md_bitmap_cond_end_sync" },
	{ 0xeea09192, "md_bitmap_start_sync" },
	{ 0x221f0e54, "bio_devname" },
	{ 0x71c90087, "memcmp" },
	{ 0x43145f74, "page_address" },
	{ 0x266c63d0, "bio_reset" },
	{ 0xba140f6d, "submit_bio_wait" },
	{ 0xe816118d, "bio_trim" },
	{ 0x69e564f1, "rdev_clear_badblocks" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x17c2670c, "md_check_recovery" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1b1e9cbb, "bio_copy_data" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0xc2a007ce, "bio_alloc_mddev" },
	{ 0x86c88398, "md_bitmap_startwrite" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xaeab54e2, "md_flush_request" },
	{ 0xbfbd5c33, "md_wait_for_blocked_rdev" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xfd11354b, "md_write_start" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2b9996f5, "__traceiter_block_bio_remap" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x356ee209, "bio_chain" },
	{ 0x7a3ebd6b, "bio_split" },
	{ 0x3c0f2bd3, "__tracepoint_block_bio_remap" },
	{ 0xeaf30af, "bio_clone_fast" },
	{ 0x6a941345, "md_cluster_ops" },
	{ 0x4b1c8282, "md_allow_write" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x5e1713ed, "blk_queue_flag_clear" },
	{ 0xcd7a71d9, "md_unregister_thread" },
	{ 0x3004a13, "blk_queue_max_write_zeroes_sectors" },
	{ 0xdd10848e, "blk_queue_max_write_same_sectors" },
	{ 0x7a990339, "mddev_init_writes_pending" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x39c89829, "md_register_thread" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x7c06cea1, "bioset_init" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x938ba313, "badblocks_check" },
	{ 0x9b511996, "md_bitmap_end_sync" },
	{ 0x25607ab0, "md_done_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x122680c7, "md_integrity_register" },
	{ 0x2ea9123e, "bioset_exit" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0xca9360b5, "rb_next" },
	{ 0x794765d1, "mempool_free" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xc5850110, "printk" },
	{ 0x98935dff, "md_error" },
	{ 0x6a4aca72, "rdev_set_badblocks" },
	{ 0x3a95a390, "sync_page_io" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0x7021387b, "disk_stack_limits" },
	{ 0xadb0db41, "md_integrity_add_rdev" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe24c8bec, "kernfs_notify" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x16537884, "md_set_array_sectors" },
	{ 0xc66cf9ea, "md_bitmap_resize" },
	{ 0x5e4aff10, "bdevname" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x65212e22, "md_wakeup_thread" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xc0e1aca5, "md_bitmap_unplug" },
	{ 0x6347906d, "bio_put" },
	{ 0x21835098, "bio_free_pages" },
	{ 0x252ede4c, "md_write_end" },
	{ 0x46056bba, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "md-mod");

