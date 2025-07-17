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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xd98c5c1e, "devm_rtc_device_register" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8574ca6c, "gpio_request_array" },
	{ 0x9dfdf722, "gpio_free_array" },
	{ 0xe97c4103, "ioremap" },
	{ 0xedc03953, "iounmap" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

