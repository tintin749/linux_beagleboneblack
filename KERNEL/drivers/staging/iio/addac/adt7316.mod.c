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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x71c90087, "memcmp" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

