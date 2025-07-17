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
	{ 0x84d7fbb2, "st_gyro_common_probe" },
	{ 0x29f8cfe7, "st_sensors_power_enable" },
	{ 0xefb762b, "st_sensors_i2c_configure" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xcae0803c, "st_gyro_get_settings" },
	{ 0x64e8fbc7, "st_sensors_dev_name_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x14a82b1b, "st_sensors_power_disable" },
	{ 0x9996ba43, "st_gyro_common_remove" },
};

MODULE_INFO(depends, "st_gyro,st_sensors,st_sensors_i2c");

MODULE_ALIAS("i2c:l3g4200d");
MODULE_ALIAS("i2c:lsm330d_gyro");
MODULE_ALIAS("i2c:lsm330dl_gyro");
MODULE_ALIAS("i2c:lsm330dlc_gyro");
MODULE_ALIAS("i2c:l3gd20");
MODULE_ALIAS("i2c:l3gd20h");
MODULE_ALIAS("i2c:l3g4is_ui");
MODULE_ALIAS("i2c:lsm330_gyro");
MODULE_ALIAS("i2c:lsm9ds0_gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyro");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3gd20h-gyro");
MODULE_ALIAS("of:N*T*Cst,l3gd20h-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyroC*");
