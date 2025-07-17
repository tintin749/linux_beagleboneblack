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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0x8f72d515, "_snd_pcm_stream_lock_irqsave" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x83939bea, "em28xx_register_extension" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x8174c0c, "snd_pcm_hw_constraint_integer" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x9d53cd8f, "em28xx_read_ac97" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x8648ef3c, "em28xx_write_ac97" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57295083, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd803cf53, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x816775cc, "snd_ctl_boolean_mono_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1609fa6, "snd_pcm_hw_constraint_minmax" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xef1cde24, "em28xx_audio_analog_set" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "48DEF706C1007D4C05CF50E");
