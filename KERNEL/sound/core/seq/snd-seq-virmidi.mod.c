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
	{ 0x8be1062a, "snd_rawmidi_proceed" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa7b3181c, "up_read" },
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xc9e6ff04, "snd_device_free" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x44ff356f, "snd_seq_create_kernel_client" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0xfb1d7438, "down_read" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xbfd2daf5, "snd_rawmidi_transmit" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0x50992cef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-midi-event,snd-seq,snd");

