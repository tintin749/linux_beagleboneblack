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
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0xe0c9e994, "iio_enum_available_read" },
	{ 0xa0557a6e, "iio_enum_write" },
	{ 0xd84ef1a3, "iio_enum_read" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x607c184d, "get_device" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x12a38747, "usleep_range" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x191af0d2, "regulator_set_voltage" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbosch,bma023");
MODULE_ALIAS("of:N*T*Cbosch,bma023C*");
MODULE_ALIAS("of:N*T*Cbosch,bma150");
MODULE_ALIAS("of:N*T*Cbosch,bma150C*");
MODULE_ALIAS("of:N*T*Cbosch,bma180");
MODULE_ALIAS("of:N*T*Cbosch,bma180C*");
MODULE_ALIAS("of:N*T*Cbosch,bma250");
MODULE_ALIAS("of:N*T*Cbosch,bma250C*");
MODULE_ALIAS("of:N*T*Cbosch,bma254");
MODULE_ALIAS("of:N*T*Cbosch,bma254C*");
MODULE_ALIAS("of:N*T*Cbosch,smb380");
MODULE_ALIAS("of:N*T*Cbosch,smb380C*");
MODULE_ALIAS("i2c:bma023");
MODULE_ALIAS("i2c:bma150");
MODULE_ALIAS("i2c:bma180");
MODULE_ALIAS("i2c:bma250");
MODULE_ALIAS("i2c:bma254");
MODULE_ALIAS("i2c:smb380");
