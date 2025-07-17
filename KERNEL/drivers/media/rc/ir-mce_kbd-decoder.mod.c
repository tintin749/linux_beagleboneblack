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
	{ 0x680fd476, "ir_raw_handler_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xc238bf99, "ir_raw_handler_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x29554a1a, "lirc_scancode_event" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf144f336, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x97934ecf, "del_timer_sync" },
};

MODULE_INFO(depends, "rc-core");

