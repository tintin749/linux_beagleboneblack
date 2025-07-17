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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x78a56cd7, "gpiochip_is_requested" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x471114d1, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cexar,xra1403");
MODULE_ALIAS("of:N*T*Cexar,xra1403C*");
MODULE_ALIAS("spi:xra1403");
