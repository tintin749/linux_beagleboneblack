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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xa7b3181c, "up_read" },
	{ 0xdca96564, "dm_table_set_type" },
	{ 0x97255bdf, "strlen" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa380ed84, "dm_path_uevent" },
	{ 0x1cc06cc1, "dm_table_get_md" },
	{ 0xb3156011, "blk_put_request" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x54f8af0f, "dm_start_time_ns_from_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0xc51eddd4, "dm_table_device_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x28e50ea6, "dm_table_event" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa2f01cd3, "blk_lld_busy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2c285bc0, "dm_suspended" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0xe864a95a, "module_put" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xdd64792, "dm_mq_kick_requeue_list" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0x78434eec, "dm_noflush_suspending" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x55306508, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x63727adc, "param_ops_ulong" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x50992cef, "try_module_get" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");

