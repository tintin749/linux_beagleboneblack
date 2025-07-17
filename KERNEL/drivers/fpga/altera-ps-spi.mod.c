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
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x47536d16, "gpiod_get_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x91452968, "_dev_err" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x2a57f60a, "fpga_mgr_register" },
	{ 0x389accb5, "devm_fpga_mgr_create" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x94355ce7, "fpga_mgr_unregister" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("spi:cyclone-ps-spi");
MODULE_ALIAS("spi:fpga-passive-serial");
MODULE_ALIAS("spi:fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serialC*");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serialC*");
