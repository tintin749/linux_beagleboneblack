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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x16adbf67, "down_killable" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0xb96022f3, "device_del" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x929b994a, "__class_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x581cde4e, "up" },
	{ 0xa23f9822, "of_parse_phandle_with_args" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb9a954cb, "device_match_of_node" },
	{ 0x3c22a869, "of_property_match_string" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

