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
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xd0a5c916, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x79246eac, "scsi_register_interface" },
	{ 0xbf451cca, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xcb63ddbd, "sg_scsi_ioctl" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfcf226a0, "scsi_ioctl" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x1efd2268, "scsi_ioctl_block_when_processing_errors" },
	{ 0x43145f74, "page_address" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x27639220, "blk_verify_command" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0xfcfeb8c6, "blk_rq_map_user_iov" },
	{ 0x2330bc87, "import_iovec" },
	{ 0xade94699, "blk_execute_rq_nowait" },
	{ 0xf6d9c30b, "blk_rq_map_user" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x14369daf, "scsi_block_when_processing_errors" },
	{ 0xa80a32e4, "scsi_autopm_get_device" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0x47925794, "idr_find" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0xe864a95a, "module_put" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0xa46e82e5, "scsi_autopm_put_device" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x77abe509, "cdev_del" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0x8781d48, "device_create" },
	{ 0x83c50091, "cdev_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa5ad86c9, "cdev_alloc" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b8f952, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0x9d669763, "memcpy" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5850110, "printk" },
	{ 0x2e88d2b, "__task_pid_nr_ns" },
	{ 0xb3156011, "blk_put_request" },
	{ 0x3d5ba341, "blk_rq_unmap_user" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x271874a0, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4570e18, "put_disk" },
	{ 0xa346975c, "idr_remove" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x8aa0402b, "_raw_read_unlock_irqrestore" },
	{ 0x1210fb32, "_raw_read_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd1b54c1, "_raw_write_unlock_irqrestore" },
	{ 0x8d66d4b, "_raw_write_lock_irqsave" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAA3A1C8224554DEE3B61A4");
