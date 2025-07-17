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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x9d88ebf9, "iio_trigger_using_own" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x376e7148, "iio_trigger_validate_own_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

