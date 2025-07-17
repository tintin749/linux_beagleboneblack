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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa3e60944, "snd_pcm_stop_xrun" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8174c0c, "snd_pcm_hw_constraint_integer" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3ed68780, "snd_timer_instance_free" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0xf65b7a0c, "snd_timer_instance_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9fbedff8, "snd_ctl_notify" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x816775cc, "snd_ctl_boolean_mono_info" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x5607b7d3, "snd_timer_start" },
	{ 0xdd37e2f9, "snd_pcm_hw_rule_add" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbc2306d7, "snd_card_ref" },
	{ 0xcd4e017d, "devm_kstrdup" },
	{ 0xb014ce9, "snd_timer_open" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x6eb12137, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b097dea, "snd_timer_close" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x36e806f7, "snd_pcm_stop" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0xa8889aba, "snd_timer_stop" },
};

MODULE_INFO(depends, "snd,snd-pcm,snd-timer");

