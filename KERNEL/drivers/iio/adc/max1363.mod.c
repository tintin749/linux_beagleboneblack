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
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7af7989b, "iio_map_array_register" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x5b312d16, "iio_map_array_unregister" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");
MODULE_ALIAS("of:N*T*Cmaxim,max1361");
MODULE_ALIAS("of:N*T*Cmaxim,max1361C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1362");
MODULE_ALIAS("of:N*T*Cmaxim,max1362C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1363");
MODULE_ALIAS("of:N*T*Cmaxim,max1363C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1364");
MODULE_ALIAS("of:N*T*Cmaxim,max1364C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1036");
MODULE_ALIAS("of:N*T*Cmaxim,max1036C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1037");
MODULE_ALIAS("of:N*T*Cmaxim,max1037C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1038");
MODULE_ALIAS("of:N*T*Cmaxim,max1038C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1039");
MODULE_ALIAS("of:N*T*Cmaxim,max1039C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1136");
MODULE_ALIAS("of:N*T*Cmaxim,max1136C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1137");
MODULE_ALIAS("of:N*T*Cmaxim,max1137C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1138");
MODULE_ALIAS("of:N*T*Cmaxim,max1138C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1139");
MODULE_ALIAS("of:N*T*Cmaxim,max1139C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1236");
MODULE_ALIAS("of:N*T*Cmaxim,max1236C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1237");
MODULE_ALIAS("of:N*T*Cmaxim,max1237C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1238");
MODULE_ALIAS("of:N*T*Cmaxim,max1238C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1239");
MODULE_ALIAS("of:N*T*Cmaxim,max1239C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11600");
MODULE_ALIAS("of:N*T*Cmaxim,max11600C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11601");
MODULE_ALIAS("of:N*T*Cmaxim,max11601C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11602");
MODULE_ALIAS("of:N*T*Cmaxim,max11602C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11603");
MODULE_ALIAS("of:N*T*Cmaxim,max11603C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11604");
MODULE_ALIAS("of:N*T*Cmaxim,max11604C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11605");
MODULE_ALIAS("of:N*T*Cmaxim,max11605C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11606");
MODULE_ALIAS("of:N*T*Cmaxim,max11606C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11607");
MODULE_ALIAS("of:N*T*Cmaxim,max11607C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11608");
MODULE_ALIAS("of:N*T*Cmaxim,max11608C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11609");
MODULE_ALIAS("of:N*T*Cmaxim,max11609C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11610");
MODULE_ALIAS("of:N*T*Cmaxim,max11610C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11611");
MODULE_ALIAS("of:N*T*Cmaxim,max11611C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11612");
MODULE_ALIAS("of:N*T*Cmaxim,max11612C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11613");
MODULE_ALIAS("of:N*T*Cmaxim,max11613C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11614");
MODULE_ALIAS("of:N*T*Cmaxim,max11614C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11615");
MODULE_ALIAS("of:N*T*Cmaxim,max11615C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11616");
MODULE_ALIAS("of:N*T*Cmaxim,max11616C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11617");
MODULE_ALIAS("of:N*T*Cmaxim,max11617C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11644");
MODULE_ALIAS("of:N*T*Cmaxim,max11644C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11645");
MODULE_ALIAS("of:N*T*Cmaxim,max11645C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11646");
MODULE_ALIAS("of:N*T*Cmaxim,max11646C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11647");
MODULE_ALIAS("of:N*T*Cmaxim,max11647C*");
