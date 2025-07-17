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
	{ 0x9e76346e, "ad7606_pm_ops" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbf83a561, "gpiod_set_array_value" },
	{ 0xb0865b4b, "ad7606_probe" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ad7606");

MODULE_ALIAS("of:N*T*Cadi,ad7605-4");
MODULE_ALIAS("of:N*T*Cadi,ad7605-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606b");
MODULE_ALIAS("of:N*T*Cadi,ad7606bC*");
MODULE_ALIAS("of:N*T*Cadi,ad7616");
MODULE_ALIAS("of:N*T*Cadi,ad7616C*");
MODULE_ALIAS("spi:ad7605-4");
MODULE_ALIAS("spi:ad7606-4");
MODULE_ALIAS("spi:ad7606-6");
MODULE_ALIAS("spi:ad7606-8");
MODULE_ALIAS("spi:ad7606b");
MODULE_ALIAS("spi:ad7616");
