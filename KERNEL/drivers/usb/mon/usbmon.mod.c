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
	{ 0xe6c093d0, "usb_mon_register" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x77abe509, "cdev_del" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x43145f74, "page_address" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xb8a83f44, "usb_debug_root" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xfffa3100, "sg_next" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc0420b23, "usb_bus_idr_lock" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8781d48, "device_create" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x83c50091, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3461ba36, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xbf451cca, "__class_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");

