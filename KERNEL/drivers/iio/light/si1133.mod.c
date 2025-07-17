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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc37335b0, "complete" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2196324, "__aeabi_idiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si1133");
