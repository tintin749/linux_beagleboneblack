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
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ads124s06");
MODULE_ALIAS("of:N*T*Cti,ads124s06C*");
MODULE_ALIAS("of:N*T*Cti,ads124s08");
MODULE_ALIAS("of:N*T*Cti,ads124s08C*");
MODULE_ALIAS("spi:ads124s06");
MODULE_ALIAS("spi:ads124s08");
