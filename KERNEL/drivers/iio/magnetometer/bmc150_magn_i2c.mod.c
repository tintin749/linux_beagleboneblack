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
	{ 0x8db946b8, "bmc150_magn_pm_ops" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xf8bc99a9, "bmc150_magn_probe" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x1e30f08d, "bmc150_magn_regmap_config" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6f13cae8, "bmc150_magn_remove" },
};

MODULE_INFO(depends, "bmc150_magn");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150");
MODULE_ALIAS("of:N*T*Cbosch,bmm150C*");
MODULE_ALIAS("i2c:bmc150_magn");
MODULE_ALIAS("i2c:bmc156_magn");
MODULE_ALIAS("i2c:bmm150_magn");
MODULE_ALIAS("acpi*:BMC150B:*");
MODULE_ALIAS("acpi*:BMC156B:*");
MODULE_ALIAS("acpi*:BMM150B:*");
