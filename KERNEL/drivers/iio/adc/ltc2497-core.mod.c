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
	{ 0xb0d87369, "regulator_disable" },
	{ 0x5b312d16, "iio_map_array_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x7af7989b, "iio_map_array_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

