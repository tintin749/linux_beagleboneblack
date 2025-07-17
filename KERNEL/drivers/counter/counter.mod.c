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
	{ 0x67f0e816, "bus_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5f754e5a, "memset" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x11e54c6, "cdev_device_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x607c184d, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0xaf61fbab, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

