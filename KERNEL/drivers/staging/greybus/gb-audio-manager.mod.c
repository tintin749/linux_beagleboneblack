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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x56c87b84, "kobject_put" },
	{ 0x55347a09, "kset_create_and_add" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9120e191, "kobject_get" },
	{ 0xa7b3181c, "up_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb1d7438, "down_read" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xcf9d76d1, "kobject_init_and_add" },
	{ 0xa24491bf, "ida_free" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x85e6ff89, "kobject_uevent_env" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xb849be00, "kernel_kobj" },
	{ 0x9c99762f, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

