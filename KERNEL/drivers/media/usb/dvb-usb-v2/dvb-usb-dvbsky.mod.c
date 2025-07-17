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
	{ 0xf9a482f9, "msleep" },
	{ 0x64f19fc8, "dvb_module_probe" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x65f31437, "dvb_usbv2_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x34782487, "param_ops_short" },
	{ 0xe19df7d5, "dvb_usbv2_generic_rw_locked" },
	{ 0xb082a885, "dvb_usbv2_generic_write_locked" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xa12da2dc, "dvb_usbv2_probe" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x30a0adb1, "dvb_usbv2_disconnect" },
	{ 0x8377dd20, "dvb_module_release" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xda06f2d, "dvb_usbv2_suspend" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9e46897a, "dvb_usbv2_reset_resume" },
	{ 0xcd27934f, "m88ds3103_get_agc_pwm" },
};

MODULE_INFO(depends, "dvb_usb_v2,rc-core,m88ds3103");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");
