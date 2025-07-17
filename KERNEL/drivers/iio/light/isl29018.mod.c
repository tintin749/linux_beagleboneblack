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
	{ 0xbede776e, "dev_err_probe" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xdd3a76b0, "regmap_get_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl29018");
MODULE_ALIAS("of:N*T*Cisil,isl29018C*");
MODULE_ALIAS("of:N*T*Cisil,isl29023");
MODULE_ALIAS("of:N*T*Cisil,isl29023C*");
MODULE_ALIAS("of:N*T*Cisil,isl29035");
MODULE_ALIAS("of:N*T*Cisil,isl29035C*");
MODULE_ALIAS("i2c:isl29018");
MODULE_ALIAS("i2c:isl29023");
MODULE_ALIAS("i2c:isl29035");
