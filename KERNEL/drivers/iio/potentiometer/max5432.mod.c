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
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max5432");
MODULE_ALIAS("of:N*T*Cmaxim,max5432C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5433");
MODULE_ALIAS("of:N*T*Cmaxim,max5433C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5434");
MODULE_ALIAS("of:N*T*Cmaxim,max5434C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5435");
MODULE_ALIAS("of:N*T*Cmaxim,max5435C*");
