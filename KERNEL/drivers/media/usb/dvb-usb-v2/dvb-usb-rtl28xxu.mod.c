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
	{ 0xf9a482f9, "msleep" },
	{ 0xef68f630, "ir_raw_event_store_with_filter" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x65f31437, "dvb_usbv2_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0xeea0399, "strscpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xc5850110, "printk" },
	{ 0xa12da2dc, "dvb_usbv2_probe" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x30a0adb1, "dvb_usbv2_disconnect" },
	{ 0x6e82b416, "i2c_adapter_type" },
	{ 0xe864a95a, "module_put" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0xda06f2d, "dvb_usbv2_suspend" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
	{ 0x9e46897a, "dvb_usbv2_reset_resume" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "rc-core,dvb_usb_v2");

MODULE_ALIAS("usb:v0BDAp2831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpB803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00E0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpC803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6680d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD394d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpA803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p707Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpD803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5654pCA42d*dc*dsc*dp*ic*isc*ip*in*");
