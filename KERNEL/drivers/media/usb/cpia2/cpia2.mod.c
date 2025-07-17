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
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0x43145f74, "page_address" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x7cdeeb4d, "pgprot_user" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0xd57a0e4d, "v4l2_fh_is_singular" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x4fc32bcf, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xd39c839, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0xceb99d81, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "16B4DA8E3FE0EBD0C8AB6C8");
