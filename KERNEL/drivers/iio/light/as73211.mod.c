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
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7931ca86, "__i2c_smbus_xfer" },
	{ 0xc37335b0, "complete" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:as73211");
MODULE_ALIAS("of:N*T*Cams,as73211");
MODULE_ALIAS("of:N*T*Cams,as73211C*");
