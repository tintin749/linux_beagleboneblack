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
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x91452968, "_dev_err" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,mag3110");
MODULE_ALIAS("of:N*T*Cfsl,mag3110C*");
MODULE_ALIAS("i2c:mag3110");
