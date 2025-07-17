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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9b126258, "of_get_property" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1a7d4790, "devm_clk_get_optional" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x118c60c9, "gpiod_set_consumer_name" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csmsc,usb3503");
MODULE_ALIAS("of:N*T*Csmsc,usb3503C*");
MODULE_ALIAS("of:N*T*Csmsc,usb3503a");
MODULE_ALIAS("of:N*T*Csmsc,usb3503aC*");
MODULE_ALIAS("i2c:usb3503");
