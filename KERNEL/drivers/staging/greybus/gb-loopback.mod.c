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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcc959e54, "gb_connection_latency_tag_disable" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x83d2a225, "single_open" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xa22ae13d, "gb_connection_latency_tag_enable" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x29762e0c, "single_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x5089aef3, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0x6d0f025f, "gb_operation_request_send" },
	{ 0xa24491bf, "ida_free" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x257b07f8, "greybus_register_driver" },
	{ 0x7d8bddf7, "greybus_deregister_driver" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x929b994a, "__class_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0x10730f47, "gb_operation_result" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x9074ff70, "sysfs_notify" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3066972, "wake_up_process" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa686a14c, "gb_operation_response_alloc" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0x49970de8, "finish_wait" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4f1bb75b, "gb_operation_get_payload_size_max" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");

