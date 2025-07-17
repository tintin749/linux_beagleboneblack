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
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xea124bd1, "gcd" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:adf4350");
MODULE_ALIAS("spi:adf4351");
MODULE_ALIAS("of:N*T*Cadi,adf4350");
MODULE_ALIAS("of:N*T*Cadi,adf4350C*");
MODULE_ALIAS("of:N*T*Cadi,adf4351");
MODULE_ALIAS("of:N*T*Cadi,adf4351C*");
