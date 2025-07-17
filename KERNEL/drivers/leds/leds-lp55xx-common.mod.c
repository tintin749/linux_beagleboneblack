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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x91771f73, "devm_led_classdev_multicolor_register_ext" },
	{ 0x815588a6, "clk_enable" },
	{ 0x118c60c9, "gpiod_set_consumer_name" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x7e3e8941, "led_mc_calc_color_components" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x9b126258, "of_get_property" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xa4c3d929, "of_get_next_available_child" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "led-class-multicolor");

