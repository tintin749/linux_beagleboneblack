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
	{ 0x50397a68, "bmc150_accel_pm_ops" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x12c63eae, "bmc150_accel_core_probe" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x3ed5d26a, "bmc150_regmap_conf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x120f3f64, "bmc150_accel_core_remove" },
};

MODULE_INFO(depends, "bmc150-accel-core");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bma255");
MODULE_ALIAS("of:N*T*Cbosch,bma255C*");
MODULE_ALIAS("of:N*T*Cbosch,bma250e");
MODULE_ALIAS("of:N*T*Cbosch,bma250eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma222e");
MODULE_ALIAS("of:N*T*Cbosch,bma222eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma280");
MODULE_ALIAS("of:N*T*Cbosch,bma280C*");
MODULE_ALIAS("i2c:bmc150_accel");
MODULE_ALIAS("i2c:bmi055_accel");
MODULE_ALIAS("i2c:bma255");
MODULE_ALIAS("i2c:bma250e");
MODULE_ALIAS("i2c:bma222e");
MODULE_ALIAS("i2c:bma280");
MODULE_ALIAS("acpi*:BSBA0150:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA0280:*");
MODULE_ALIAS("acpi*:BOSC0200:*");
