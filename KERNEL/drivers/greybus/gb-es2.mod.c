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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9c19f6ea, "gb_hd_cport_release_reserved" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x2fe6ca90, "usb_get_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x7f00f049, "greybus_data_rcvd" },
	{ 0xc5cbdc54, "kstrtoint_from_user" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3431339f, "__traceiter_gb_message_submit" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xa24491bf, "ida_free" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xfa71e909, "__tracepoint_gb_message_submit" },
	{ 0x244b1cd5, "greybus_message_sent" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x91452968, "_dev_err" },
	{ 0x9b8dffde, "gb_hd_del" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x109d2adb, "gb_debugfs_get" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x3066972, "wake_up_process" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1e7430ac, "gb_hd_create" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd7fd6c1, "gb_hd_add" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa35942e2, "gb_hd_cport_reserve" },
	{ 0x8c15c98e, "gb_hd_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "greybus");

MODULE_ALIAS("usb:v18D1p1EAFd*dc*dsc*dp*ic*isc*ip*in*");
