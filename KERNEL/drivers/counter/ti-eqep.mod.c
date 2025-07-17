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
	{ 0x2f76980b, "counter_add" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xeba77662, "__devm_regmap_init_mmio_clk" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x8c132ad4, "devm_counter_alloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x70518148, "counter_priv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xe63d2e24, "counter_unregister" },
};

MODULE_INFO(depends, "counter");

MODULE_ALIAS("of:N*T*Cti,am3352-eqep");
MODULE_ALIAS("of:N*T*Cti,am3352-eqepC*");
