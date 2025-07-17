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
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x91452968, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:adjd_s311");
