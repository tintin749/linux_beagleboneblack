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
	{ 0x556e4390, "clk_get_rate" },
	{ 0x91452968, "_dev_err" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xe76e58e3, "devm_adi_axi_adc_conv_register" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xe2500dfd, "adi_axi_adc_conv_priv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "adi-axi-adc");

MODULE_ALIAS("of:N*T*Cadi,ad9265");
MODULE_ALIAS("of:N*T*Cadi,ad9265C*");
MODULE_ALIAS("of:N*T*Cadi,ad9434");
MODULE_ALIAS("of:N*T*Cadi,ad9434C*");
MODULE_ALIAS("of:N*T*Cadi,ad9467");
MODULE_ALIAS("of:N*T*Cadi,ad9467C*");
