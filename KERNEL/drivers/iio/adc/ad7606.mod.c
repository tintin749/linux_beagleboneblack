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
	{ 0x4bfdcefa, "__memset32" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x315bef8d, "devm_gpiod_get_array_optional" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x376e7148, "iio_trigger_validate_own_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xbf83a561, "gpiod_set_array_value" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

