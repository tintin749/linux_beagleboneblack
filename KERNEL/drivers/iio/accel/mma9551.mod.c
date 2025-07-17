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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9e2baeb8, "desc_to_gpio" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x1954f1aa, "devm_gpiod_get_index" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x37cc3987, "mma9551_read_version" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0x69c04314, "mma9551_read_accel_chan" },
	{ 0x9aec3d1f, "mma9551_read_status_byte" },
	{ 0x3003cc3b, "mma9551_gpio_config" },
	{ 0x3e3c070d, "mma9551_set_power_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5a74b9c5, "mma9551_read_config_byte" },
	{ 0xa8d51df5, "mma9551_update_config_bits" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x223251ce, "mma9551_set_device_state" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mma9551_core");

MODULE_ALIAS("i2c:mma9551");
MODULE_ALIAS("acpi*:MMA9551:*");
