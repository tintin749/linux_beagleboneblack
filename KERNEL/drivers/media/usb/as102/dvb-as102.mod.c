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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0x34782487, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");
