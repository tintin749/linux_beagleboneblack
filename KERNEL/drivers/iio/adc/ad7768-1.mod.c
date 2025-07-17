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
	{ 0x91452968, "_dev_err" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x607c184d, "get_device" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad7768-1");
MODULE_ALIAS("of:N*T*Cadi,ad7768-1C*");
MODULE_ALIAS("spi:ad7768-1");
