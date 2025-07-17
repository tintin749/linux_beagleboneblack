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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x37f614b7, "__kfifo_len_r" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xa6970398, "__kfifo_to_user_r" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0xeb55a931, "__kfifo_max_r" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb8c32fa8, "snd_rawmidi_transmit_peek" },
	{ 0x2dda7fd8, "snd_hwdep_new" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x790b0f9a, "usb_urb_ep_type_check" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0xd1944ac0, "snd_pcm_hw_constraint_ratdens" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf9388886, "snd_rawmidi_transmit_ack" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0x2ec524ad, "__kfifo_in_r" },
	{ 0x8ea39136, "usb_interrupt_msg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x1bfd4a32, "usb_control_msg_recv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xed85337d, "usb_control_msg_send" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd,snd-hwdep");

