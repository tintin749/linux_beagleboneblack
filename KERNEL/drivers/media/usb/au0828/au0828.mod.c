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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0xc40d969e, "media_device_usb_allocate" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x86ec0e9d, "__media_pipeline_start" },
	{ 0x73e63a30, "media_device_unregister_entity_notify" },
	{ 0xcd3d59c, "_vb2_fop_release" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0xb57a311a, "media_device_unregister_entity" },
	{ 0x2578e1ac, "v4l2_i2c_new_subdev" },
	{ 0x2add323, "dvb_create_media_graph" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x18f7b82a, "dvb_frontend_suspend" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x583108c4, "dvb_frontend_resume" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0xbfbeacaf, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb6ef5ae2, "v4l_disable_media_source" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xde1d3460, "media_device_delete" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x42e071c2, "media_entity_setup_link" },
	{ 0xd415ab0, "media_get_pad_index" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x34782487, "param_ops_short" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39662414, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1565cebb, "tveeprom_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x908b1a57, "vb2_ioctl_create_bufs" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdceeda5c, "v4l_enable_media_source" },
	{ 0x7a09f1c3, "media_device_register_entity" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xec2e47b4, "media_device_register_entity_notify" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0x9b944008, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb0ed0af8, "__media_pipeline_stop" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x7c65d38d, "media_create_pad_link" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0x706fae94, "vb2_video_unregister_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x7b5aae83, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6921390a, "__media_entity_setup_link" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0xe4bccdad, "ir_raw_event_store" },
	{ 0x5d822b49, "i2c_probe_func_quick_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x999412e6, "vb2_ioctl_expbuf" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "rc-core,tveeprom");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "38C92EB8CE7CC398CD38435");
