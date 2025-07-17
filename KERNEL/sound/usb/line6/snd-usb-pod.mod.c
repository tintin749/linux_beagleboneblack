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
	{ 0x402ccea0, "line6_version_request_async" },
	{ 0x9b2eced3, "line6_resume" },
	{ 0x508b2287, "line6_probe" },
	{ 0x4b6f0c76, "line6_alloc_sysex_buffer" },
	{ 0x58933b0b, "line6_disconnect" },
	{ 0x27bedaac, "line6_send_sysex_message" },
	{ 0x202a1b1b, "line6_midi_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x54ccd27f, "snd_card_add_dev_attr" },
	{ 0x91452968, "_dev_err" },
	{ 0xa76d32d6, "line6_init_pcm" },
	{ 0x56f60e5, "line6_suspend" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb4bb0141, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");
