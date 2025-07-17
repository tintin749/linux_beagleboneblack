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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xeaa6c550, "usb_init_urb" },
	{ 0x17ddfc2b, "snd_pcm_hw_constraint_msbits" },
	{ 0xa3e60944, "snd_pcm_stop_xrun" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfaaf4009, "__snd_usbmidi_create" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xc1609fa6, "snd_pcm_hw_constraint_minmax" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x15f5c1f6, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");
