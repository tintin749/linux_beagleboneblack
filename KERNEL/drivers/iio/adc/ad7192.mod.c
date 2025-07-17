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
	{ 0xbedc19f5, "ad_sd_validate_trigger" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x42ceb03f, "ad_sd_read_reg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x221ad3a1, "ad_sd_reset" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xffe6af74, "ad_sd_setup_buffer_and_trigger" },
	{ 0xe7f4ba5a, "ad_sd_init" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x6e45adf0, "ad_sd_calibrate" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x158b9026, "ad_sigma_delta_single_conversion" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8a7f60e3, "ad_sd_calibrate_all" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x5b7e461f, "ad_sd_write_reg" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x27b5fcea, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ad_sigma_delta");

MODULE_ALIAS("of:N*T*Cadi,ad7190");
MODULE_ALIAS("of:N*T*Cadi,ad7190C*");
MODULE_ALIAS("of:N*T*Cadi,ad7192");
MODULE_ALIAS("of:N*T*Cadi,ad7192C*");
MODULE_ALIAS("of:N*T*Cadi,ad7193");
MODULE_ALIAS("of:N*T*Cadi,ad7193C*");
MODULE_ALIAS("of:N*T*Cadi,ad7195");
MODULE_ALIAS("of:N*T*Cadi,ad7195C*");
