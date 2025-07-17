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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x99bb8806, "memmove" },
	{ 0x97255bdf, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xff814b79, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Catlas,co2-ezo");
MODULE_ALIAS("of:N*T*Catlas,co2-ezoC*");
MODULE_ALIAS("of:N*T*Catlas,o2-ezo");
MODULE_ALIAS("of:N*T*Catlas,o2-ezoC*");
MODULE_ALIAS("of:N*T*Catlas,hum-ezo");
MODULE_ALIAS("of:N*T*Catlas,hum-ezoC*");
MODULE_ALIAS("i2c:atlas-co2-ezo");
MODULE_ALIAS("i2c:atlas-o2-ezo");
MODULE_ALIAS("i2c:atlas-hum-ezo");
