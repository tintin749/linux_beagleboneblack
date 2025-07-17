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
	{ 0x314b20c8, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xff178f6, "__aeabi_idivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,bh1710");
MODULE_ALIAS("of:N*T*Crohm,bh1710C*");
MODULE_ALIAS("of:N*T*Crohm,bh1715");
MODULE_ALIAS("of:N*T*Crohm,bh1715C*");
MODULE_ALIAS("of:N*T*Crohm,bh1721");
MODULE_ALIAS("of:N*T*Crohm,bh1721C*");
MODULE_ALIAS("of:N*T*Crohm,bh1750");
MODULE_ALIAS("of:N*T*Crohm,bh1750C*");
MODULE_ALIAS("of:N*T*Crohm,bh1751");
MODULE_ALIAS("of:N*T*Crohm,bh1751C*");
MODULE_ALIAS("i2c:bh1710");
MODULE_ALIAS("i2c:bh1715");
MODULE_ALIAS("i2c:bh1721");
MODULE_ALIAS("i2c:bh1750");
MODULE_ALIAS("i2c:bh1751");
