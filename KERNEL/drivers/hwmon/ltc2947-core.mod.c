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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x1a7d4790, "devm_clk_get_optional" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xdd3a76b0, "regmap_get_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ltc2947");
MODULE_ALIAS("of:N*T*Cadi,ltc2947C*");
