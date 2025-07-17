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
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xeaa6c550, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xa3e60944, "snd_pcm_stop_xrun" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe40bbfb1, "_snd_ctl_add_follower" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xc2b46b9, "snd_ctl_boolean_stereo_info" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x816775cc, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xe57aac8, "snd_ctl_make_virtual_master" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0x8ea39136, "usb_interrupt_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x1bfd4a32, "usb_control_msg_recv" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xbfd2daf5, "snd_rawmidi_transmit" },
	{ 0xed85337d, "usb_control_msg_send" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");
