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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0xa7b3181c, "up_read" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x91452968, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x11e54c6, "cdev_device_add" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x607c184d, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xaf61fbab, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xbf451cca, "__class_create" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

