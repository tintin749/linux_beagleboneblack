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
	{ 0x6f6e8b64, "hid_sensor_pm_ops" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x4b692c41, "sensor_hub_register_callback" },
	{ 0x62d0c481, "hid_sensor_setup_trigger" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0xb945e0dd, "sensor_hub_input_get_attribute_info" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0xdc85e83a, "hid_sensor_parse_common_attributes" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x72574ee1, "hid_sensor_read_samp_freq_value" },
	{ 0x8d09d04f, "sensor_hub_input_attr_get_raw_value" },
	{ 0xcc838eb4, "hid_sensor_power_state" },
	{ 0x1e38ca67, "hid_sensor_read_raw_hyst_value" },
	{ 0xee501c13, "hid_sensor_write_raw_hyst_value" },
	{ 0x58eb1c93, "hid_sensor_write_samp_freq_value" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x837c68bf, "hid_sensor_remove_trigger" },
	{ 0x6d3e8ad2, "sensor_hub_remove_callback" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "hid-sensor-trigger,hid-sensor-hub,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200033");
