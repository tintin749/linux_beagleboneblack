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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xd712add3, "power_supply_unregister" },
	{ 0x8caf3d2b, "power_supply_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x870ad977, "gb_connection_enable_tx" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x257b07f8, "greybus_register_driver" },
	{ 0x7d8bddf7, "greybus_deregister_driver" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x91452968, "_dev_err" },
	{ 0x49f26466, "kstrndup" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0xc883203a, "power_supply_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3f05e582, "power_supply_register" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
	{ 0x421d4dcf, "krealloc" },
};

MODULE_INFO(depends, "greybus");

