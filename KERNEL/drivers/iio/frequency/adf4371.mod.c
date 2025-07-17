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
	{ 0xea124bd1, "gcd" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x89dedc93, "regmap_multi_reg_write" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adf4371");
MODULE_ALIAS("of:N*T*Cadi,adf4371C*");
MODULE_ALIAS("of:N*T*Cadi,adf4372");
MODULE_ALIAS("of:N*T*Cadi,adf4372C*");
MODULE_ALIAS("spi:adf4371");
MODULE_ALIAS("spi:adf4372");
