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
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccapella,cm36651");
MODULE_ALIAS("of:N*T*Ccapella,cm36651C*");
MODULE_ALIAS("i2c:cm36651");
