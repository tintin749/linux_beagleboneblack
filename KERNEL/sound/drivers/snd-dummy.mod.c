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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8174c0c, "snd_pcm_hw_constraint_integer" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0xc2b46b9, "snd_ctl_boolean_stereo_info" },
	{ 0x9fbedff8, "snd_ctl_notify" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xc1609fa6, "snd_pcm_hw_constraint_minmax" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xf8252269, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");

