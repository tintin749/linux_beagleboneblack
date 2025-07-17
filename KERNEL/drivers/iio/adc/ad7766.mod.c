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
	{ 0x376e7148, "iio_trigger_validate_own_device" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x91452968, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff689ea5, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ad7766");
MODULE_ALIAS("spi:ad7766-1");
MODULE_ALIAS("spi:ad7766-2");
MODULE_ALIAS("spi:ad7767");
MODULE_ALIAS("spi:ad7767-1");
MODULE_ALIAS("spi:ad7767-2");
