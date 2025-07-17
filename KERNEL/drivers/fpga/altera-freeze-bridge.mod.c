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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xf87db0a3, "fpga_bridge_register" },
	{ 0x21ea30f5, "devm_fpga_bridge_create" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf7cbf97b, "fpga_bridge_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "fpga-bridge");

MODULE_ALIAS("of:N*T*Caltr,freeze-bridge-controller");
MODULE_ALIAS("of:N*T*Caltr,freeze-bridge-controllerC*");
