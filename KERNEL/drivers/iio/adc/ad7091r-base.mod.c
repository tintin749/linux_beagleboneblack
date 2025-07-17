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
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

