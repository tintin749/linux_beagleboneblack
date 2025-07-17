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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x9d9911ae, "dm_kcopyd_copy" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x75175277, "dm_bio_get_target_bio_nr" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x6dd7de8f, "dm_accept_partial_bio" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x794765d1, "mempool_free" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc81901a, "wait_for_completion_io" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc37335b0, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3066972, "wake_up_process" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2c285bc0, "dm_suspended" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x2ea9123e, "bioset_exit" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x49970de8, "finish_wait" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xca9360b5, "rb_next" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe14da0d6, "dm_io" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "dm-mod");

