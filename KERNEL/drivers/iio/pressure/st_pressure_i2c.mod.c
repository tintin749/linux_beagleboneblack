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
	{ 0x91452968, "_dev_err" },
	{ 0xc1c3d21c, "st_press_common_probe" },
	{ 0x29f8cfe7, "st_sensors_power_enable" },
	{ 0xefb762b, "st_sensors_i2c_configure" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x186aed24, "st_press_get_settings" },
	{ 0x64e8fbc7, "st_sensors_dev_name_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x14a82b1b, "st_sensors_power_disable" },
	{ 0x6164b3d7, "st_press_common_remove" },
};

MODULE_INFO(depends, "st_pressure,st_sensors,st_sensors_i2c");

MODULE_ALIAS("i2c:lps001wp");
MODULE_ALIAS("i2c:lps25h");
MODULE_ALIAS("i2c:lps331ap");
MODULE_ALIAS("i2c:lps22hb");
MODULE_ALIAS("i2c:lps33hw");
MODULE_ALIAS("i2c:lps35hw");
MODULE_ALIAS("i2c:lps22hh");
MODULE_ALIAS("of:N*T*Cst,lps001wp-press");
MODULE_ALIAS("of:N*T*Cst,lps001wp-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps25h-press");
MODULE_ALIAS("of:N*T*Cst,lps25h-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps331ap-press");
MODULE_ALIAS("of:N*T*Cst,lps331ap-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps22hb-press");
MODULE_ALIAS("of:N*T*Cst,lps22hb-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps33hw");
MODULE_ALIAS("of:N*T*Cst,lps33hwC*");
MODULE_ALIAS("of:N*T*Cst,lps35hw");
MODULE_ALIAS("of:N*T*Cst,lps35hwC*");
MODULE_ALIAS("of:N*T*Cst,lps22hh");
MODULE_ALIAS("of:N*T*Cst,lps22hhC*");
