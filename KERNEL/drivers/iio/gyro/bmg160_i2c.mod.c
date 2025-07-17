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
	{ 0x7f659bd5, "bmg160_pm_ops" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x77a3aae, "bmg160_core_probe" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x42e0b19, "bmg160_core_remove" },
};

MODULE_INFO(depends, "bmg160_core");

MODULE_ALIAS("of:N*T*Cbosch,bmg160");
MODULE_ALIAS("of:N*T*Cbosch,bmg160C*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyro");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyroC*");
MODULE_ALIAS("i2c:bmg160");
MODULE_ALIAS("i2c:bmi055_gyro");
MODULE_ALIAS("i2c:bmi088_gyro");
MODULE_ALIAS("acpi*:BMG0160:*");
MODULE_ALIAS("acpi*:BMI055B:*");
MODULE_ALIAS("acpi*:BMI088B:*");
