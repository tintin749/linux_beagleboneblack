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
	{ 0xb44618ee, "st_magn_common_probe" },
	{ 0x29f8cfe7, "st_sensors_power_enable" },
	{ 0xefb762b, "st_sensors_i2c_configure" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x5b144b9d, "st_magn_get_settings" },
	{ 0x64e8fbc7, "st_sensors_dev_name_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x14a82b1b, "st_sensors_power_disable" },
	{ 0xfb7b367f, "st_magn_common_remove" },
};

MODULE_INFO(depends, "st_magn,st_sensors,st_sensors_i2c");

MODULE_ALIAS("i2c:lsm303dlh_magn");
MODULE_ALIAS("i2c:lsm303dlhc_magn");
MODULE_ALIAS("i2c:lsm303dlm_magn");
MODULE_ALIAS("i2c:lis3mdl");
MODULE_ALIAS("i2c:lsm303agr_magn");
MODULE_ALIAS("i2c:lis2mdl");
MODULE_ALIAS("i2c:lsm9ds1_magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-magnC*");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magn");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magnC*");
MODULE_ALIAS("of:N*T*Cst,lis2mdl");
MODULE_ALIAS("of:N*T*Cst,lis2mdlC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magn");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magnC*");
