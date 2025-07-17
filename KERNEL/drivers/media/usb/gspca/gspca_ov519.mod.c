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
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0x3591d6c3, "gspca_suspend" },
	{ 0xfdf4170c, "usb_altnum_to_altsetting" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x57a6cbc6, "gspca_dev_probe" },
	{ 0x9f25347b, "gspca_resume" },
	{ 0xb7abcce3, "v4l2_ctrl_g_ctrl" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2b7e65bb, "gspca_disconnect" },
	{ 0xf144f336, "input_event" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4fc32bcf, "__v4l2_ctrl_grab" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5b316d2a, "__v4l2_ctrl_s_ctrl" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x9d669763, "memcpy" },
	{ 0xae8494ae, "gspca_frame_add" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v041Ep4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep028Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0154d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p2800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p4519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p8519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0813p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B62p0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E96pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1046p9967d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8020pEF04d*dc*dsc*dp*ic*isc*ip*in*");
