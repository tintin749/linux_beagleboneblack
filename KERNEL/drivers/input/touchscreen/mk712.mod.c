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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x4384eb42, "__release_region" },
	{ 0x20496c04, "input_free_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x47c19580, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0xae9849dd, "__request_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf144f336, "input_event" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

