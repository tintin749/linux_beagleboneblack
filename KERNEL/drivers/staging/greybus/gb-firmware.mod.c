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
	{ 0x77abe509, "cdev_del" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x98171fcf, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa24491bf, "ida_free" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x257b07f8, "greybus_register_driver" },
	{ 0x7d8bddf7, "greybus_deregister_driver" },
	{ 0x8781d48, "device_create" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x83c50091, "cdev_add" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0xa686a14c, "gb_operation_response_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b59e093, "gb_spilib_master_init" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xbf451cca, "__class_create" },
	{ 0x4f1bb75b, "gb_operation_get_payload_size_max" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1bad0b9d, "gb_spilib_master_exit" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe1bb3592, "gb_interface_request_mode_switch" },
};

MODULE_INFO(depends, "greybus,gb-spilib");

