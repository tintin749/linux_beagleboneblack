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
	{ 0x85c6ab2a, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x36db63a9, "gb_gbphy_register_driver" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x5db6fb6e, "tty_port_open" },
	{ 0xbd90fe92, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x346d4b65, "gb_connection_disable_rx" },
	{ 0x994692ad, "tty_register_driver" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x10aacb52, "put_tty_driver" },
	{ 0xeb898af7, "tty_set_operations" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3b33bff9, "tty_port_put" },
	{ 0x2a6b6dd4, "gb_gbphy_deregister_driver" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0xf624bab7, "tty_port_close" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x870ad977, "gb_connection_enable_tx" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x567f4894, "tty_port_register_device" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x2384dd17, "tty_port_init" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x78739415, "tty_vhangup" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x91452968, "_dev_err" },
	{ 0xa346975c, "idr_remove" },
	{ 0x146cdd8f, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x100ccaff, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0x968034d3, "tty_unregister_driver" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xade0739b, "tty_standard_install" },
	{ 0xd1b941a5, "__tty_alloc_driver" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0x25b8aad7, "tty_kref_put" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x47925794, "idr_find" },
	{ 0x4f1bb75b, "gb_operation_get_payload_size_max" },
	{ 0x281823c5, "__kfifo_out_peek" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");

