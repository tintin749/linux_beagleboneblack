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
	{ 0xf45998ae, "device_get_next_child_node" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b88f8aa, "gpiochip_remove" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xed22a207, "fwnode_property_read_u32_array" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

