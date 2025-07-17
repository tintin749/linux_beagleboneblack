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
	{ 0xae9849dd, "__request_region" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x30e11a72, "release_and_free_resource" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x3c812a4b, "param_ops_long" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xbfd2daf5, "snd_rawmidi_transmit" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

