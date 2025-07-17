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
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x607c184d, "get_device" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x283c0cc7, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si1132");
MODULE_ALIAS("i2c:si1141");
MODULE_ALIAS("i2c:si1142");
MODULE_ALIAS("i2c:si1143");
MODULE_ALIAS("i2c:si1145");
MODULE_ALIAS("i2c:si1146");
MODULE_ALIAS("i2c:si1147");
