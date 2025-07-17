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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0x91452968, "_dev_err" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0xdd9934c5, "devm_power_supply_register" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x315bef8d, "devm_gpiod_get_array_optional" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xdbbb4596, "devm_request_any_context_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-charger");
MODULE_ALIAS("of:N*T*Cgpio-chargerC*");
