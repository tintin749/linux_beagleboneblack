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
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x61c04805, "gpiod_cansleep" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xc37335b0, "complete" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3fba701, "wait_for_completion_killable_timeout" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xff689ea5, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdevantech,srf04");
MODULE_ALIAS("of:N*T*Cdevantech,srf04C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1000");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1000C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1010");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1010C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1020");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1020C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1030");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1030C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1040");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1040C*");
