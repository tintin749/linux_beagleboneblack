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
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xc3a7a561, "inv_mpu_pmops" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x91452968, "_dev_err" },
	{ 0x363445b, "inv_mpu_core_probe" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "inv-mpu6050");

MODULE_ALIAS("spi:mpu6000");
MODULE_ALIAS("spi:mpu6500");
MODULE_ALIAS("spi:mpu6515");
MODULE_ALIAS("spi:mpu9250");
MODULE_ALIAS("spi:mpu9255");
MODULE_ALIAS("spi:icm20608");
MODULE_ALIAS("spi:icm20609");
MODULE_ALIAS("spi:icm20689");
MODULE_ALIAS("spi:icm20602");
MODULE_ALIAS("spi:icm20690");
MODULE_ALIAS("spi:iam20680");
MODULE_ALIAS("acpi*:INVN6000:*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6000");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6000C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690C*");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680C*");
