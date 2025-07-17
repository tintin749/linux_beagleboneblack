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
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x790b0f9a, "usb_urb_ep_type_check" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xbfd2daf5, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");
