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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x9b944008, "video_devdata" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x57fc4cde, "si470x_set_freq" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x91452968, "_dev_err" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0x9d669763, "memcpy" },
	{ 0xac7542cc, "si470x_viddev_template" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xfd33ba0e, "si470x_ctrl_ops" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9be458c6, "si470x_stop" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc37335b0, "complete" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x3c7342e7, "si470x_start" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x822137e2, "arm_heavy_mb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "425D7D57A708B77627D8055");
