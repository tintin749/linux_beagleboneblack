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
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xd990d9d8, "videobuf_iolock" },
	{ 0xd295ef59, "videobuf_vmalloc_free" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x4f0f29f8, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9fad4847, "videobuf_read_one" },
	{ 0xfb7a8a9e, "videobuf_streamon" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x20d75474, "videobuf_queue_is_busy" },
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x934a72fd, "videobuf_mmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x68d3b5fc, "videobuf_poll_stream" },
	{ 0xceb99d81, "v4l2_ctrl_poll" },
	{ 0x79382394, "videobuf_mmap_mapper" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x642e9a9c, "videobuf_reqbufs" },
	{ 0x1db67f9f, "videobuf_querybuf" },
	{ 0xa7367cca, "videobuf_qbuf" },
	{ 0x1ed08492, "videobuf_dqbuf" },
	{ 0x5fd0678e, "videobuf_streamoff" },
	{ 0x9b944008, "video_devdata" },
	{ 0xeea0399, "strscpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe8e8167a, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "videobuf-core,videobuf-vmalloc");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F4B3F06A8788ABFFA836ACB");
