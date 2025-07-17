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
	{ 0x83189a47, "vb2_ioctl_reqbufs" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd3d59c, "_vb2_fop_release" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2578e1ac, "v4l2_i2c_new_subdev" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0xb472f54c, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
	{ 0x5609f35f, "usb_reset_endpoint" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x18fe542f, "__media_device_usb_init" },
	{ 0xcd7cbcb4, "cx2341x_handler_set_50hz" },
	{ 0xd254f1f4, "cx2341x_handler_init" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0xbfbeacaf, "v4l2_mc_create_media_graph" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x42e071c2, "media_entity_setup_link" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0x9d0b2a07, "v4l2_s_ctrl" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x91452968, "_dev_err" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa5537485, "media_device_cleanup" },
	{ 0x7a09f1c3, "media_device_register_entity" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x668516e5, "cx2341x_handler_setup" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x7b5aae83, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xfb84e7b7, "v4l2_ctrl_add_handler" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0xa78f82b0, "v4l2_ctrl_radio_filter" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7ff3b25e, "media_device_unregister" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0xceb99d81, "v4l2_ctrl_poll" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "tveeprom,cx2341x,rc-core");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "349D2380DE56FD7A4A78885");
