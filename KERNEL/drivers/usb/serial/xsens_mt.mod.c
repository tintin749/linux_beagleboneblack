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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v2639p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0017d*dc*dsc*dp*ic*isc*ip*in*");
