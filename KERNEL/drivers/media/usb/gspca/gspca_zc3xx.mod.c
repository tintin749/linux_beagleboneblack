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
	{ 0xf9a482f9, "msleep" },
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0x3591d6c3, "gspca_suspend" },
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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5b316d2a, "__v4l2_ctrl_s_ctrl" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x9d669763, "memcpy" },
	{ 0xae8494ae, "gspca_frame_add" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v03F0p1B07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep041Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep403Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p700Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p700Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp089Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0325d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0698p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p301Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p303Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p305Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p307Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp804Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp8050d*dc*dsc*dp*ic*isc*ip*in*");
