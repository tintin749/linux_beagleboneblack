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
	{ 0x3591d6c3, "gspca_suspend" },
	{ 0x57a6cbc6, "gspca_dev_probe" },
	{ 0x9f25347b, "gspca_resume" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x2b7e65bb, "gspca_disconnect" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xae8494ae, "gspca_frame_add" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v040Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0497pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p00DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p0401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p0402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1776p501Cd*dc*dsc*dp*ic*isc*ip*in*");
