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
	{ 0xc5f21212, "_dev_notice" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0xca03ce4a, "devm_thermal_zone_of_sensor_register" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6369fc49, "iio_read_channel_processed" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgeneric-adc-thermal");
MODULE_ALIAS("of:N*T*Cgeneric-adc-thermalC*");
