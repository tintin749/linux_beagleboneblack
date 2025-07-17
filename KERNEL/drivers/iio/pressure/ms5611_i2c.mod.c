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
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x11a8e7d3, "ms5611_probe" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb4b555e, "ms5611_remove" },
};

MODULE_INFO(depends, "ms5611_core");

MODULE_ALIAS("i2c:ms5611");
MODULE_ALIAS("i2c:ms5607");
MODULE_ALIAS("of:N*T*Cmeas,ms5611");
MODULE_ALIAS("of:N*T*Cmeas,ms5611C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5607");
MODULE_ALIAS("of:N*T*Cmeas,ms5607C*");
