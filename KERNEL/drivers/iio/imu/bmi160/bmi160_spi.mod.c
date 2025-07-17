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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xbcd2c630, "bmi160_core_probe" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xa0f5acdb, "bmi160_regmap_config" },
	{ 0xee53f79d, "spi_get_device_id" },
};

MODULE_INFO(depends, "bmi160_core");

MODULE_ALIAS("of:N*T*Cbosch,bmi160");
MODULE_ALIAS("of:N*T*Cbosch,bmi160C*");
MODULE_ALIAS("acpi*:BMI0160:*");
MODULE_ALIAS("spi:bmi160");
