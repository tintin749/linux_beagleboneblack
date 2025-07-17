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
	{ 0x6ef63a20, "st_lsm6dsx_pm_ops" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x983e139d, "st_lsm6dsx_probe" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xee53f79d, "spi_get_device_id" },
};

MODULE_INFO(depends, "st_lsm6dsx");

MODULE_ALIAS("spi:lsm6ds3");
MODULE_ALIAS("spi:lsm6ds3h");
MODULE_ALIAS("spi:lsm6dsl");
MODULE_ALIAS("spi:lsm6dsm");
MODULE_ALIAS("spi:ism330dlc");
MODULE_ALIAS("spi:lsm6dso");
MODULE_ALIAS("spi:asm330lhh");
MODULE_ALIAS("spi:lsm6dsox");
MODULE_ALIAS("spi:lsm6dsr");
MODULE_ALIAS("spi:lsm6ds3tr-c");
MODULE_ALIAS("spi:ism330dhcx");
MODULE_ALIAS("spi:lsm9ds1-imu");
MODULE_ALIAS("spi:lsm6ds0");
MODULE_ALIAS("spi:lsm6dsrx");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3C*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3h");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3hC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsl");
MODULE_ALIAS("of:N*T*Cst,lsm6dslC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsm");
MODULE_ALIAS("of:N*T*Cst,lsm6dsmC*");
MODULE_ALIAS("of:N*T*Cst,ism330dlc");
MODULE_ALIAS("of:N*T*Cst,ism330dlcC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dso");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoC*");
MODULE_ALIAS("of:N*T*Cst,asm330lhh");
MODULE_ALIAS("of:N*T*Cst,asm330lhhC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsox");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoxC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsr");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrC*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-c");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-cC*");
MODULE_ALIAS("of:N*T*Cst,ism330dhcx");
MODULE_ALIAS("of:N*T*Cst,ism330dhcxC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imu");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imuC*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds0");
MODULE_ALIAS("of:N*T*Cst,lsm6ds0C*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrx");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrxC*");
