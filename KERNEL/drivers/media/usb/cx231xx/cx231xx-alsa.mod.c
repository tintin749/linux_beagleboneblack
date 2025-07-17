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
	{ 0x25740127, "is_fw_load" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xb472f54c, "v4l2_subdev_call_wrappers" },
	{ 0x8f72d515, "_snd_pcm_stream_lock_irqsave" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x8174c0c, "snd_pcm_hw_constraint_integer" },
	{ 0xf63e32af, "cx231xx_register_extension" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd803cf53, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x91452968, "_dev_err" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x96a50cc, "cx231xx_capture_start" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8ca59efd, "cx231xx_set_alt_setting" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xa9adc74e, "cx231xx_unregister_extension" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,snd");

