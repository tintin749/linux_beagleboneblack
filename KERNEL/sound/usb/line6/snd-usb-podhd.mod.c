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
	{ 0x578ab384, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9b2eced3, "line6_resume" },
	{ 0x508b2287, "line6_probe" },
	{ 0x58933b0b, "line6_disconnect" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0x54ccd27f, "snd_card_add_dev_attr" },
	{ 0x91452968, "_dev_err" },
	{ 0xa76d32d6, "line6_init_pcm" },
	{ 0x56f60e5, "line6_suspend" },
	{ 0x57557413, "line6_send_raw_message" },
	{ 0xe10c71b9, "line6_read_data" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x1bfd4a32, "usb_control_msg_recv" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xed85337d, "usb_control_msg_send" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");
