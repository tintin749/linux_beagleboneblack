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
	{ 0xae9849dd, "__request_region" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc9e6ff04, "snd_device_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc87fe1c2, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc8954e39, "snd_rawmidi_new" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xb8c32fa8, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x30e11a72, "release_and_free_resource" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9388886, "snd_rawmidi_transmit_ack" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x94ac97d6, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");

