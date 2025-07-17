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
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1a4bf601, "devm_pinctrl_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xda18b7fa, "pinctrl_dev_get_drvdata" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd6bd546a, "pinconf_generic_dt_free_map" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xa70f74f3, "regcache_cache_only" },
	{ 0x51d8ba79, "pinconf_generic_dt_node_to_map" },
	{ 0x61f90f46, "device_property_present" },
};

MODULE_INFO(depends, "");

