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
	{ 0x554f6a60, "__rtc_register_device" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xab6da217, "devm_rtc_allocate_device" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x91452968, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfe990052, "gpio_free" },
};

MODULE_INFO(depends, "");

