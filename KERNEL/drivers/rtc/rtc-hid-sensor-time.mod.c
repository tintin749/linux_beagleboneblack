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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x91452968, "_dev_err" },
	{ 0xf0ef52e8, "down" },
	{ 0xd98c5c1e, "devm_rtc_device_register" },
	{ 0x581cde4e, "up" },
	{ 0x5e588863, "sensor_hub_device_open" },
	{ 0x4b692c41, "sensor_hub_register_callback" },
	{ 0xb945e0dd, "sensor_hub_input_get_attribute_info" },
	{ 0xdc85e83a, "hid_sensor_parse_common_attributes" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc37335b0, "complete" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3fba701, "wait_for_completion_killable_timeout" },
	{ 0x8d09d04f, "sensor_hub_input_attr_get_raw_value" },
	{ 0x6d3e8ad2, "sensor_hub_remove_callback" },
	{ 0x12ae932a, "sensor_hub_device_close" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "hid-sensor-hub,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-2000a0");
