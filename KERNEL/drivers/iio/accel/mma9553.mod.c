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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x33f1b0a6, "mma9551_write_config_words" },
	{ 0x4d80dbfc, "mma9551_app_reset" },
	{ 0x94081e32, "mma9551_read_config_words" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x37cc3987, "mma9551_read_version" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x3003cc3b, "mma9551_gpio_config" },
	{ 0x89a19620, "mma9551_read_status_words" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0x69c04314, "mma9551_read_accel_chan" },
	{ 0x45ca2e28, "mma9551_read_status_word" },
	{ 0x3e3c070d, "mma9551_set_power_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x230c8d66, "mma9551_read_config_word" },
	{ 0xe4e161f4, "mma9551_write_config_word" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x223251ce, "mma9551_set_device_state" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mma9551_core");

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");
