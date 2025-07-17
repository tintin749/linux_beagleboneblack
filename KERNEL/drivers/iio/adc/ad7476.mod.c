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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ad7091");
MODULE_ALIAS("spi:ad7091r");
MODULE_ALIAS("spi:ad7273");
MODULE_ALIAS("spi:ad7274");
MODULE_ALIAS("spi:ad7276");
MODULE_ALIAS("spi:ad7277");
MODULE_ALIAS("spi:ad7278");
MODULE_ALIAS("spi:ad7466");
MODULE_ALIAS("spi:ad7467");
MODULE_ALIAS("spi:ad7468");
MODULE_ALIAS("spi:ad7475");
MODULE_ALIAS("spi:ad7476");
MODULE_ALIAS("spi:ad7476a");
MODULE_ALIAS("spi:ad7477");
MODULE_ALIAS("spi:ad7477a");
MODULE_ALIAS("spi:ad7478");
MODULE_ALIAS("spi:ad7478a");
MODULE_ALIAS("spi:ad7495");
MODULE_ALIAS("spi:ad7910");
MODULE_ALIAS("spi:ad7920");
MODULE_ALIAS("spi:ad7940");
MODULE_ALIAS("spi:adc081s");
MODULE_ALIAS("spi:adc101s");
MODULE_ALIAS("spi:adc121s");
MODULE_ALIAS("spi:ads7866");
MODULE_ALIAS("spi:ads7867");
MODULE_ALIAS("spi:ads7868");
