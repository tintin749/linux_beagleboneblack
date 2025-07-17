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
	{ 0x501cec73, "class_find_device" },
	{ 0xd8e5296, "kmap_to_page" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xfc064e46, "sg_miter_start" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa24491bf, "ida_free" },
	{ 0x89b273f1, "sg_miter_stop" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xadae8bd2, "sg_miter_next" },
	{ 0xe864a95a, "module_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xc614760f, "sg_alloc_table_from_pages" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb9a954cb, "device_match_of_node" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xbf451cca, "__class_create" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x50992cef, "try_module_get" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "");

