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
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xbedc19f5, "ad_sd_validate_trigger" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xffe6af74, "ad_sd_setup_buffer_and_trigger" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x12a38747, "usleep_range" },
	{ 0x221ad3a1, "ad_sd_reset" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x5f754e5a, "memset" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa4c3d929, "of_get_next_available_child" },
	{ 0xe7f4ba5a, "ad_sd_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x158b9026, "ad_sigma_delta_single_conversion" },
	{ 0x5b7e461f, "ad_sd_write_reg" },
	{ 0x42ceb03f, "ad_sd_read_reg" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x27b5fcea, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0x7bee2dda, "iio_device_unregister" },
};

MODULE_INFO(depends, "ad_sigma_delta");

MODULE_ALIAS("of:N*T*Cadi,ad7124-4");
MODULE_ALIAS("of:N*T*Cadi,ad7124-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8C*");
