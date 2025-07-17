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
	{ 0x6c50e3bd, "bma400_probe" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xea9a67b1, "bma400_regmap_config" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x57e3aaf8, "bma400_remove" },
};

MODULE_INFO(depends, "bma400_core");

MODULE_ALIAS("of:N*T*Cbosch,bma400");
MODULE_ALIAS("of:N*T*Cbosch,bma400C*");
MODULE_ALIAS("i2c:bma400");
