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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xf06aeee7, "fwnode_property_present" },
	{ 0x91452968, "_dev_err" },
	{ 0x7beb5c84, "fwnode_handle_put" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xed22a207, "fwnode_property_read_u32_array" },
	{ 0xf45998ae, "device_get_next_child_node" },
	{ 0x3a144459, "device_get_child_node_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ad5770r");
MODULE_ALIAS("of:N*T*Cadi,ad5770r");
MODULE_ALIAS("of:N*T*Cadi,ad5770rC*");
