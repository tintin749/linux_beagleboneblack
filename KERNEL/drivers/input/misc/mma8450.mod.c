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
	{ 0xf9a482f9, "msleep" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf144f336, "input_event" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x47c19580, "input_register_device" },
	{ 0xf3efe387, "input_set_max_poll_interval" },
	{ 0x429cd5e0, "input_set_poll_interval" },
	{ 0xc6d81d3c, "input_setup_polling" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc9b63333, "devm_input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,mma8450");
MODULE_ALIAS("of:N*T*Cfsl,mma8450C*");
MODULE_ALIAS("i2c:mma8450");
