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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x507202b4, "usb_gstrings_attach" },
	{ 0x3337b29, "usb_free_all_descriptors" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf0dd7b, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0x78f0c107, "usb_put_function_instance" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe9e256b4, "usb_ep_autoconfig" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x56ab0610, "config_group_init_type_name" },
	{ 0x91452968, "_dev_err" },
	{ 0xcfe420d9, "usb_function_register" },
	{ 0x49f26466, "kstrndup" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x77a8f05, "snd_component_add" },
	{ 0xf14b0edb, "alloc_ep_req" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x53880fa1, "config_ep_by_speed" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x27383389, "snd_rawmidi_drop_output" },
	{ 0xd5f4f47b, "usb_interface_id" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xbfd2daf5, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

