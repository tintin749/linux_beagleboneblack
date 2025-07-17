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
	{ 0xf9a482f9, "msleep" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x15f5c1f6, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");
