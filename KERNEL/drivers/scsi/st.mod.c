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
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc0feaad1, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x929b994a, "__class_register" },
	{ 0x643f4530, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xfcf226a0, "scsi_ioctl" },
	{ 0x1efd2268, "scsi_ioctl_block_when_processing_errors" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0x47925794, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x10dd97d3, "unpin_user_pages_dirty_lock" },
	{ 0x99bb8806, "memmove" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3d5ba341, "blk_rq_unmap_user" },
	{ 0xc37335b0, "complete" },
	{ 0x14369daf, "scsi_block_when_processing_errors" },
	{ 0xb3156011, "blk_put_request" },
	{ 0xade94699, "blk_execute_rq_nowait" },
	{ 0x9d669763, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf6d9c30b, "blk_rq_map_user" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x64d5ce5c, "blk_put_queue" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa4d109c0, "blk_queue_rq_timeout" },
	{ 0x3e6b203a, "blk_get_queue" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0xa346975c, "idr_remove" },
	{ 0xa80a32e4, "scsi_autopm_get_device" },
	{ 0xa46e82e5, "scsi_autopm_put_device" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4570e18, "put_disk" },
	{ 0xd26cc043, "unpin_user_pages" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0xb81ef745, "pin_user_pages_fast" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x43145f74, "page_address" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x7b8f952, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xd6011ff, "scsi_set_medium_removal" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8781d48, "device_create" },
	{ 0x83c50091, "cdev_add" },
	{ 0xa5ad86c9, "cdev_alloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x77abe509, "cdev_del" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

