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
	{ 0x77abe509, "cdev_del" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8781d48, "device_create" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x83c50091, "cdev_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");

