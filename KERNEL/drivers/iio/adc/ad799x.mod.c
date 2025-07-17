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
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ad7991");
MODULE_ALIAS("i2c:ad7995");
MODULE_ALIAS("i2c:ad7999");
MODULE_ALIAS("i2c:ad7992");
MODULE_ALIAS("i2c:ad7993");
MODULE_ALIAS("i2c:ad7994");
MODULE_ALIAS("i2c:ad7997");
MODULE_ALIAS("i2c:ad7998");
