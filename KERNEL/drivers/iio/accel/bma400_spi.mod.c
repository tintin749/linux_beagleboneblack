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
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x91452968, "_dev_err" },
	{ 0x6c50e3bd, "bma400_probe" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0xea9a67b1, "bma400_regmap_config" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x57e3aaf8, "bma400_remove" },
};

MODULE_INFO(depends, "bma400_core");

MODULE_ALIAS("of:N*T*Cbosch,bma400");
MODULE_ALIAS("of:N*T*Cbosch,bma400C*");
MODULE_ALIAS("spi:bma400");
