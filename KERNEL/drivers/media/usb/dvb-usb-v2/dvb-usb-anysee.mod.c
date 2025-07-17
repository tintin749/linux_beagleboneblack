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
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x65f31437, "dvb_usbv2_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0x34782487, "param_ops_short" },
	{ 0xe19df7d5, "dvb_usbv2_generic_rw_locked" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xc5850110, "printk" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xa12da2dc, "dvb_usbv2_probe" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcbc87285, "dvb_ca_en50221_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x30a0adb1, "dvb_usbv2_disconnect" },
	{ 0xe864a95a, "module_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0xda06f2d, "dvb_usbv2_suspend" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd408429b, "dvb_ca_en50221_init" },
	{ 0x9e46897a, "dvb_usbv2_reset_resume" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "dvb_usb_v2,rc-core");

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");
