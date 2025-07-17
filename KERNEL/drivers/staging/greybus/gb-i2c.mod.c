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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x36db63a9, "gb_gbphy_register_driver" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x2a6b6dd4, "gb_gbphy_deregister_driver" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x91452968, "_dev_err" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");

