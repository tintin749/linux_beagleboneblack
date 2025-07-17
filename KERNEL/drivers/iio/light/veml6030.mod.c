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
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x12a38747, "usleep_range" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:veml6030");
MODULE_ALIAS("of:N*T*Cvishay,veml6030");
MODULE_ALIAS("of:N*T*Cvishay,veml6030C*");
