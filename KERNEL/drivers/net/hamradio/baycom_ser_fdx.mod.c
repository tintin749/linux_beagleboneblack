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
	{ 0xceeee77a, "param_array_ops" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x193ca59f, "hdlcdrv_unregister" },
	{ 0x3c559fbd, "hdlcdrv_register" },
	{ 0x7c23a035, "hdlcdrv_arbitrate" },
	{ 0xc5936752, "hdlcdrv_receiver" },
	{ 0x35a3a396, "hdlcdrv_transmitter" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xae9849dd, "__request_region" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x349cba85, "strchr" },
};

MODULE_INFO(depends, "hdlcdrv");

