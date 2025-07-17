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
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x5a742e56, "crc8" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("i2c:icp10100");
MODULE_ALIAS("of:N*T*Cinvensense,icp10100");
MODULE_ALIAS("of:N*T*Cinvensense,icp10100C*");
