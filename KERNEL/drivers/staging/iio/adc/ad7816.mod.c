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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ad7816");
MODULE_ALIAS("spi:ad7817");
MODULE_ALIAS("spi:ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7816");
MODULE_ALIAS("of:N*T*Cadi,ad7816C*");
MODULE_ALIAS("of:N*T*Cadi,ad7817");
MODULE_ALIAS("of:N*T*Cadi,ad7817C*");
MODULE_ALIAS("of:N*T*Cadi,ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7818C*");
