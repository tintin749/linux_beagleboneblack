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
	{ 0x91452968, "_dev_err" },
	{ 0xf87db0a3, "fpga_bridge_register" },
	{ 0x21ea30f5, "devm_fpga_bridge_create" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf7cbf97b, "fpga_bridge_unregister" },
};

MODULE_INFO(depends, "fpga-bridge");

MODULE_ALIAS("of:N*T*Cxlnx,pr-decoupler-1.00");
MODULE_ALIAS("of:N*T*Cxlnx,pr-decoupler-1.00C*");
MODULE_ALIAS("of:N*T*Cxlnx,pr-decoupler");
MODULE_ALIAS("of:N*T*Cxlnx,pr-decouplerC*");
