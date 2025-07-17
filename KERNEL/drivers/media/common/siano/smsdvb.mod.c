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
	{ 0xd88c29ad, "smscore_register_hotplug" },
	{ 0xb16816d3, "smscore_get_board_id" },
	{ 0xc59dc9a7, "sms_board_setup" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x2add323, "dvb_create_media_graph" },
	{ 0x22032da, "sms_board_event" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x34782487, "param_ops_short" },
	{ 0x63222b29, "smsclient_sendrequest" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5e92ad99, "sms_board_lna_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x974a4146, "smscore_putbuffer" },
	{ 0xa5537485, "media_device_cleanup" },
	{ 0x1dc4bde4, "smscore_unregister_hotplug" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0x6471ba8d, "sms_board_power" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x86f4a77b, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd1d49aaf, "smscore_register_client" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xde788b67, "smscore_get_device_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x7ff3b25e, "media_device_unregister" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv");

