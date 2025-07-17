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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64f19fc8, "dvb_module_probe" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x97255bdf, "strlen" },
	{ 0x2578e1ac, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7b4dd2cb, "cx2341x_fill_defaults" },
	{ 0xeea0399, "strscpy" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xe1fe1432, "cx2341x_log_status" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x28240e61, "cx2341x_ctrl_get_menu" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d0b2a07, "v4l2_s_ctrl" },
	{ 0x34782487, "param_ops_short" },
	{ 0x8112492b, "device_register" },
	{ 0x569752c8, "usb_lock_device_for_reset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdbc5583a, "cx2341x_update" },
	{ 0x347c5f0e, "freezing_slow_path" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x177517b4, "v4l2_fh_init" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdbd6e8a0, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x929b994a, "__class_register" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x790b0f9a, "usb_urb_ep_type_check" },
	{ 0x483a055b, "device_create_file" },
	{ 0x8377dd20, "dvb_module_release" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x15ac1bd0, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x3066972, "wake_up_process" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3e582c15, "v4l2_fh_add" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xea8e69f7, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x743b4ada, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
	{ 0x9a17275b, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "tveeprom,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "58EC52D509E15D2ADC202E7");
