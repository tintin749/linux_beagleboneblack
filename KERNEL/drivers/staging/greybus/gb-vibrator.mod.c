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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0x257b07f8, "greybus_register_driver" },
	{ 0x7d8bddf7, "greybus_deregister_driver" },
	{ 0x8781d48, "device_create" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x929b994a, "__class_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");

