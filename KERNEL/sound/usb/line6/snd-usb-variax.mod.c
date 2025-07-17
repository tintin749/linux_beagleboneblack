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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402ccea0, "line6_version_request_async" },
	{ 0x9b2eced3, "line6_resume" },
	{ 0x508b2287, "line6_probe" },
	{ 0x58933b0b, "line6_disconnect" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x56f60e5, "line6_suspend" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xce1b6b59, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");
