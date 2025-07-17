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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x8c233055, "adt7316_pm_ops" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xd38eab32, "adt7316_probe" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
};

MODULE_INFO(depends, "adt7316");

MODULE_ALIAS("of:N*T*Cadi,adt7316");
MODULE_ALIAS("of:N*T*Cadi,adt7316C*");
MODULE_ALIAS("of:N*T*Cadi,adt7317");
MODULE_ALIAS("of:N*T*Cadi,adt7317C*");
MODULE_ALIAS("of:N*T*Cadi,adt7318");
MODULE_ALIAS("of:N*T*Cadi,adt7318C*");
MODULE_ALIAS("of:N*T*Cadi,adt7516");
MODULE_ALIAS("of:N*T*Cadi,adt7516C*");
MODULE_ALIAS("of:N*T*Cadi,adt7517");
MODULE_ALIAS("of:N*T*Cadi,adt7517C*");
MODULE_ALIAS("of:N*T*Cadi,adt7519");
MODULE_ALIAS("of:N*T*Cadi,adt7519C*");
MODULE_ALIAS("spi:adt7316");
MODULE_ALIAS("spi:adt7317");
MODULE_ALIAS("spi:adt7318");
MODULE_ALIAS("spi:adt7516");
MODULE_ALIAS("spi:adt7517");
MODULE_ALIAS("spi:adt7519");
