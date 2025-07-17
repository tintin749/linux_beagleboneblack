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
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x1cff6e14, "snd_midi_event_reset_encode" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfed10f19, "snd_rawmidi_kernel_release" },
	{ 0x44ff356f, "snd_seq_create_kernel_client" },
	{ 0xdab3913f, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xe9eb0322, "snd_rawmidi_input_params" },
	{ 0x192987ab, "__snd_seq_driver_register" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xa64d240f, "snd_rawmidi_drain_output" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0x55701094, "snd_rawmidi_kernel_write" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x82a59c79, "snd_rawmidi_kernel_read" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xeb9481d8, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xdfc94d9d, "snd_seq_driver_unregister" },
	{ 0xe25acb4c, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");

