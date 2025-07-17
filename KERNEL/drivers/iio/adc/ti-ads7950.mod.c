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
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x1b88f8aa, "gpiochip_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ads7950");
MODULE_ALIAS("of:N*T*Cti,ads7950C*");
MODULE_ALIAS("of:N*T*Cti,ads7951");
MODULE_ALIAS("of:N*T*Cti,ads7951C*");
MODULE_ALIAS("of:N*T*Cti,ads7952");
MODULE_ALIAS("of:N*T*Cti,ads7952C*");
MODULE_ALIAS("of:N*T*Cti,ads7953");
MODULE_ALIAS("of:N*T*Cti,ads7953C*");
MODULE_ALIAS("of:N*T*Cti,ads7954");
MODULE_ALIAS("of:N*T*Cti,ads7954C*");
MODULE_ALIAS("of:N*T*Cti,ads7955");
MODULE_ALIAS("of:N*T*Cti,ads7955C*");
MODULE_ALIAS("of:N*T*Cti,ads7956");
MODULE_ALIAS("of:N*T*Cti,ads7956C*");
MODULE_ALIAS("of:N*T*Cti,ads7957");
MODULE_ALIAS("of:N*T*Cti,ads7957C*");
MODULE_ALIAS("of:N*T*Cti,ads7958");
MODULE_ALIAS("of:N*T*Cti,ads7958C*");
MODULE_ALIAS("of:N*T*Cti,ads7959");
MODULE_ALIAS("of:N*T*Cti,ads7959C*");
MODULE_ALIAS("of:N*T*Cti,ads7960");
MODULE_ALIAS("of:N*T*Cti,ads7960C*");
MODULE_ALIAS("of:N*T*Cti,ads7961");
MODULE_ALIAS("of:N*T*Cti,ads7961C*");
MODULE_ALIAS("spi:ads7950");
MODULE_ALIAS("spi:ads7951");
MODULE_ALIAS("spi:ads7952");
MODULE_ALIAS("spi:ads7953");
MODULE_ALIAS("spi:ads7954");
MODULE_ALIAS("spi:ads7955");
MODULE_ALIAS("spi:ads7956");
MODULE_ALIAS("spi:ads7957");
MODULE_ALIAS("spi:ads7958");
MODULE_ALIAS("spi:ads7959");
MODULE_ALIAS("spi:ads7960");
MODULE_ALIAS("spi:ads7961");
