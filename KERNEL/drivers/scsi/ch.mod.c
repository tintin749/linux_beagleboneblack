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
	{ 0xceeee77a, "param_array_ops" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc0feaad1, "scsi_register_driver" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0xbf451cca, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfcf226a0, "scsi_ioctl" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x1efd2268, "scsi_ioctl_block_when_processing_errors" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0x98171fcf, "device_destroy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa346975c, "idr_remove" },
	{ 0xb20c8a0f, "scsi_device_lookup" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8781d48, "device_create" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x47925794, "idr_find" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8caf669e, "scsi_print_sense_hdr" },
	{ 0x1aed12cf, "__scsi_execute" },
};

MODULE_INFO(depends, "");

