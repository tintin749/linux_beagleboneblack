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
	{ 0xe0c9e994, "iio_enum_available_read" },
	{ 0xa0557a6e, "iio_enum_write" },
	{ 0xd84ef1a3, "iio_enum_read" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x91452968, "_dev_err" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ad5625");
MODULE_ALIAS("i2c:ad5625r-1v25");
MODULE_ALIAS("i2c:ad5625r-2v5");
MODULE_ALIAS("i2c:ad5627");
MODULE_ALIAS("i2c:ad5627r-1v25");
MODULE_ALIAS("i2c:ad5627r-2v5");
MODULE_ALIAS("i2c:ad5629-1");
MODULE_ALIAS("i2c:ad5629-2");
MODULE_ALIAS("i2c:ad5629-3");
MODULE_ALIAS("i2c:ad5645r-1v25");
MODULE_ALIAS("i2c:ad5645r-2v5");
MODULE_ALIAS("i2c:ad5665");
MODULE_ALIAS("i2c:ad5665r-1v25");
MODULE_ALIAS("i2c:ad5665r-2v5");
MODULE_ALIAS("i2c:ad5667");
MODULE_ALIAS("i2c:ad5667r-1v25");
MODULE_ALIAS("i2c:ad5667r-2v5");
MODULE_ALIAS("i2c:ad5669-1");
MODULE_ALIAS("i2c:ad5669-2");
MODULE_ALIAS("i2c:ad5669-3");
MODULE_ALIAS("i2c:ltc2606");
MODULE_ALIAS("i2c:ltc2607");
MODULE_ALIAS("i2c:ltc2609");
MODULE_ALIAS("i2c:ltc2616");
MODULE_ALIAS("i2c:ltc2617");
MODULE_ALIAS("i2c:ltc2619");
MODULE_ALIAS("i2c:ltc2626");
MODULE_ALIAS("i2c:ltc2627");
MODULE_ALIAS("i2c:ltc2629");
MODULE_ALIAS("i2c:ltc2631-l12");
MODULE_ALIAS("i2c:ltc2631-h12");
MODULE_ALIAS("i2c:ltc2631-l10");
MODULE_ALIAS("i2c:ltc2631-h10");
MODULE_ALIAS("i2c:ltc2631-l8");
MODULE_ALIAS("i2c:ltc2631-h8");
MODULE_ALIAS("i2c:ltc2633-l12");
MODULE_ALIAS("i2c:ltc2633-h12");
MODULE_ALIAS("i2c:ltc2633-l10");
MODULE_ALIAS("i2c:ltc2633-h10");
MODULE_ALIAS("i2c:ltc2633-l8");
MODULE_ALIAS("i2c:ltc2633-h8");
MODULE_ALIAS("i2c:ltc2635-l12");
MODULE_ALIAS("i2c:ltc2635-h12");
MODULE_ALIAS("i2c:ltc2635-l10");
MODULE_ALIAS("i2c:ltc2635-h10");
MODULE_ALIAS("i2c:ltc2635-l8");
MODULE_ALIAS("i2c:ltc2635-h8");
MODULE_ALIAS("spi:ad5024");
MODULE_ALIAS("spi:ad5025");
MODULE_ALIAS("spi:ad5044");
MODULE_ALIAS("spi:ad5045");
MODULE_ALIAS("spi:ad5064");
MODULE_ALIAS("spi:ad5064-1");
MODULE_ALIAS("spi:ad5065");
MODULE_ALIAS("spi:ad5628-1");
MODULE_ALIAS("spi:ad5628-2");
MODULE_ALIAS("spi:ad5648-1");
MODULE_ALIAS("spi:ad5648-2");
MODULE_ALIAS("spi:ad5666-1");
MODULE_ALIAS("spi:ad5666-2");
MODULE_ALIAS("spi:ad5668-1");
MODULE_ALIAS("spi:ad5668-2");
MODULE_ALIAS("spi:ad5668-3");
