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
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x98e7f978, "remap_vmalloc_range" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x9b944008, "video_devdata" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0xceb99d81, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xb2d4eb27, "usb_put_intf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v174FpA311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v05E1p0501d*dc*dsc*dp*icFFiscFFipFFin*");
