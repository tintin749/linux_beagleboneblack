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
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x57a6cbc6, "gspca_dev_probe" },
	{ 0x9f25347b, "gspca_resume" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x2b7e65bb, "gspca_disconnect" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x3066972, "wake_up_process" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xae8494ae, "gspca_frame_add" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v0402p5602d*dc*dsc*dp*ic*isc*ip*in*");
