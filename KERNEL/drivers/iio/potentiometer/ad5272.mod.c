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
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ad5272-020");
MODULE_ALIAS("i2c:ad5272-050");
MODULE_ALIAS("i2c:ad5272-100");
MODULE_ALIAS("i2c:ad5274-020");
MODULE_ALIAS("i2c:ad5274-100");
MODULE_ALIAS("of:N*T*Cadi,ad5272-020");
MODULE_ALIAS("of:N*T*Cadi,ad5272-020C*");
MODULE_ALIAS("of:N*T*Cadi,ad5272-050");
MODULE_ALIAS("of:N*T*Cadi,ad5272-050C*");
MODULE_ALIAS("of:N*T*Cadi,ad5272-100");
MODULE_ALIAS("of:N*T*Cadi,ad5272-100C*");
MODULE_ALIAS("of:N*T*Cadi,ad5274-020");
MODULE_ALIAS("of:N*T*Cadi,ad5274-020C*");
MODULE_ALIAS("of:N*T*Cadi,ad5274-100");
MODULE_ALIAS("of:N*T*Cadi,ad5274-100C*");
