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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x2add323, "dvb_create_media_graph" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x18fe542f, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0xf144f336, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x21381c3b, "dvb_dmx_swfilter_raw" },
	{ 0x5f754e5a, "memset" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xedda2b2f, "dvb_dmx_swfilter_204" },
	{ 0xa5537485, "media_device_cleanup" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x20496c04, "input_free_device" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7b5aae83, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7ff3b25e, "media_device_unregister" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "rc-core");


MODULE_INFO(srcversion, "5AD837954B46D08A1E90344");
