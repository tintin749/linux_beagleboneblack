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
	{ 0xceeee77a, "param_array_ops" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x91452968, "_dev_err" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x483a055b, "device_create_file" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf144f336, "input_event" },
	{ 0x292a31e8, "__hid_request" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");
