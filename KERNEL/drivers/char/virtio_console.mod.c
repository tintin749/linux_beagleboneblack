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
	{ 0x29762e0c, "single_release" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xc5850110, "printk" },
	{ 0xbf451cca, "__class_create" },
	{ 0x50c162a8, "hvc_instantiate" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1be6c017, "pipe_unlock" },
	{ 0xb00c4688, "__splice_from_pipe" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4f0740c7, "pipe_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x328a05f1, "strncpy" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc37335b0, "complete" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8781d48, "device_create" },
	{ 0x83c50091, "cdev_add" },
	{ 0xa5ad86c9, "cdev_alloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9833bc0c, "hvc_kick" },
	{ 0xc45cc6ef, "hvc_poll" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x92b57248, "flush_work" },
	{ 0xfac91659, "virtio_break_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x77abe509, "cdev_del" },
	{ 0x98171fcf, "device_destroy" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xc65a6206, "hvc_remove" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x347c5f0e, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x1000e51, "schedule" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x91452968, "_dev_err" },
	{ 0xf2f7faf2, "hvc_alloc" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xa032ffc7, "dma_alloc_attrs" },
	{ 0x607c184d, "get_device" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeac16fb4, "virtqueue_detach_unused_buf" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x43145f74, "page_address" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xa93bbbe0, "__hvc_resize" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0xa81d390b, "virtqueue_is_broken" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xf82c8787, "dma_free_attrs" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x9d669763, "memcpy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x271874a0, "fasync_helper" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x83d2a225, "single_open" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d0000000Bv*");
MODULE_ALIAS("virtio:d00000003v*");
