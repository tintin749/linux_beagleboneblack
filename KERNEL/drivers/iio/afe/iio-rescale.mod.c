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
	{ 0xbede776e, "dev_err_probe" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xce548d94, "iio_get_channel_ext_info_count" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x3edfeba3, "iio_read_channel_raw" },
	{ 0x546f50a6, "iio_read_channel_scale" },
	{ 0xe8035251, "iio_read_avail_channel_raw" },
	{ 0x7fd11ac8, "iio_read_channel_ext_info" },
	{ 0xa7a7ee33, "iio_write_channel_ext_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xea124bd1, "gcd" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccurrent-sense-amplifier");
MODULE_ALIAS("of:N*T*Ccurrent-sense-amplifierC*");
MODULE_ALIAS("of:N*T*Ccurrent-sense-shunt");
MODULE_ALIAS("of:N*T*Ccurrent-sense-shuntC*");
MODULE_ALIAS("of:N*T*Cvoltage-divider");
MODULE_ALIAS("of:N*T*Cvoltage-dividerC*");
