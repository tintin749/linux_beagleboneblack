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
	{ 0xf0e5a00, "st_accel_common_remove" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x14a82b1b, "st_sensors_power_disable" },
	{ 0xc02ce28b, "st_accel_common_probe" },
	{ 0x29f8cfe7, "st_sensors_power_enable" },
	{ 0xefb762b, "st_sensors_i2c_configure" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x1e0ec76a, "st_accel_get_settings" },
	{ 0x64e8fbc7, "st_sensors_dev_name_probe" },
};

MODULE_INFO(depends, "st_accel,st_sensors,st_sensors_i2c");

MODULE_ALIAS("i2c:lsm303dlh_accel");
MODULE_ALIAS("i2c:lsm303dlhc_accel");
MODULE_ALIAS("i2c:lis3dh");
MODULE_ALIAS("i2c:lsm330d_accel");
MODULE_ALIAS("i2c:lsm330dl_accel");
MODULE_ALIAS("i2c:lsm330dlc_accel");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("i2c:lsm303dl_accel");
MODULE_ALIAS("i2c:lsm303dlm_accel");
MODULE_ALIAS("i2c:lsm330_accel");
MODULE_ALIAS("i2c:lsm303agr_accel");
MODULE_ALIAS("i2c:lis2dh12_accel");
MODULE_ALIAS("i2c:lis3l02dq");
MODULE_ALIAS("i2c:lng2dm");
MODULE_ALIAS("i2c:h3lis331dl_accel");
MODULE_ALIAS("i2c:lis331dl_accel");
MODULE_ALIAS("i2c:lis3lv02dl_accel");
MODULE_ALIAS("i2c:lis2dw12");
MODULE_ALIAS("i2c:lis3de");
MODULE_ALIAS("i2c:lis2de12");
MODULE_ALIAS("i2c:lis2hh12");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dC*");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accel");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accel");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accelC*");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3l02dq");
MODULE_ALIAS("of:N*T*Cst,lis3l02dqC*");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accel");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dw12");
MODULE_ALIAS("of:N*T*Cst,lis2dw12C*");
MODULE_ALIAS("of:N*T*Cst,lis3de");
MODULE_ALIAS("of:N*T*Cst,lis3deC*");
MODULE_ALIAS("of:N*T*Cst,lis2de12");
MODULE_ALIAS("of:N*T*Cst,lis2de12C*");
MODULE_ALIAS("of:N*T*Cst,lis2hh12");
MODULE_ALIAS("of:N*T*Cst,lis2hh12C*");
