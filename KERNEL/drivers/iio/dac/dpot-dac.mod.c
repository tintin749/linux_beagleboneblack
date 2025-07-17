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
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x606edacc, "iio_read_max_channel_raw" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x3edfeba3, "iio_read_channel_raw" },
	{ 0x546f50a6, "iio_read_channel_scale" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe8035251, "iio_read_avail_channel_raw" },
	{ 0xcf4e9342, "iio_write_channel_raw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdpot-dac");
MODULE_ALIAS("of:N*T*Cdpot-dacC*");
