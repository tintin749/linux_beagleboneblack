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
	{ 0x67f0e816, "bus_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8221889f, "driver_register" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8112492b, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0x257b07f8, "greybus_register_driver" },
	{ 0x7d8bddf7, "greybus_deregister_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5df474c4, "pm_generic_runtime_suspend" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xf7145a3e, "pm_generic_runtime_resume" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x15d1942f, "greybus_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "greybus");

