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
	{ 0x91452968, "_dev_err" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xe70ac90e, "ltc2497core_probe" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3eb6d7b0, "ltc2497core_remove" },
};

MODULE_INFO(depends, "ltc2497-core");

MODULE_ALIAS("of:N*T*Clltc,ltc2497");
MODULE_ALIAS("of:N*T*Clltc,ltc2497C*");
MODULE_ALIAS("i2c:ltc2497");
