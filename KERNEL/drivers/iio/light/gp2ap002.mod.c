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
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x191af0d2, "regulator_set_voltage" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0x7616fa77, "device_property_read_u8_array" },
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x6369fc49, "iio_read_channel_processed" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x91452968, "_dev_err" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csharp,gp2ap002a00f");
MODULE_ALIAS("of:N*T*Csharp,gp2ap002a00fC*");
MODULE_ALIAS("of:N*T*Csharp,gp2ap002s00f");
MODULE_ALIAS("of:N*T*Csharp,gp2ap002s00fC*");
MODULE_ALIAS("i2c:gp2ap002");
