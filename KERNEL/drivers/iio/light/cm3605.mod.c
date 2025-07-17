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
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x38e7052a, "led_trigger_register_simple" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x6369fc49, "iio_read_channel_processed" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xce726e94, "led_trigger_unregister_simple" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xe9805148, "led_trigger_event" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccapella,cm3605");
MODULE_ALIAS("of:N*T*Ccapella,cm3605C*");
