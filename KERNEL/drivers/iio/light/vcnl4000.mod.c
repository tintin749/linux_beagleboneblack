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
	{ 0x376e7148, "iio_trigger_validate_own_device" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4000");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4000C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200C*");
MODULE_ALIAS("i2c:vcnl4000");
MODULE_ALIAS("i2c:vcnl4010");
MODULE_ALIAS("i2c:vcnl4020");
MODULE_ALIAS("i2c:vcnl4040");
MODULE_ALIAS("i2c:vcnl4200");
