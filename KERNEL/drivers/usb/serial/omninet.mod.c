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
	{ 0xabeed1a8, "usb_serial_deregister_drivers" },
	{ 0x7fd7171, "usb_serial_register_drivers" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0586p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p2000d*dc*dsc*dp*ic*isc*ip*in*");
