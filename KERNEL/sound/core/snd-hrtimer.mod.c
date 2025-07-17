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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x9ee5e40a, "__ktime_divns" },
	{ 0x833f6500, "snd_timer_global_new" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4da078e, "snd_timer_interrupt" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xe48a4a64, "snd_timer_global_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d5a8178, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xff23f3ea, "snd_timer_global_free" },
};

MODULE_INFO(depends, "snd-timer");

