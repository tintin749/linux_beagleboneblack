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
	{ 0x56c87b84, "kobject_put" },
	{ 0xa5ad86c9, "cdev_alloc" },
	{ 0x77abe509, "cdev_del" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x5bc08174, "kobject_set_name" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x868f8b1f, "kobject_create_and_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xb96022f3, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0x271874a0, "fasync_helper" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x78b0e659, "kobject_add" },
	{ 0x929b994a, "__class_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xa346975c, "idr_remove" },
	{ 0x83c50091, "cdev_add" },
	{ 0xe864a95a, "module_put" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd39c839, "remap_pfn_range" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x609cc1a8, "kobject_init" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x47925794, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x50992cef, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

