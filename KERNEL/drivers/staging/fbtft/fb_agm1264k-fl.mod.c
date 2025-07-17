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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x653569a1, "fbtft_dbg_hex" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x4dc416c9, "fbtft_probe_common" },
	{ 0x10169533, "fbtft_remove_common" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-fl");
MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-flC*");
