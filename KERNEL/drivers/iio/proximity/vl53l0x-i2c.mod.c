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
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,vl53l0x");
MODULE_ALIAS("of:N*T*Cst,vl53l0xC*");
