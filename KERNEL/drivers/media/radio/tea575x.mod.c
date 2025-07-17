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
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0xceb99d81, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "");

