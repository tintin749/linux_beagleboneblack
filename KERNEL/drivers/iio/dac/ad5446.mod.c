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
	{ 0xe0c9e994, "iio_enum_available_read" },
	{ 0xa0557a6e, "iio_enum_write" },
	{ 0xd84ef1a3, "iio_enum_read" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ad5301");
MODULE_ALIAS("i2c:ad5311");
MODULE_ALIAS("i2c:ad5321");
MODULE_ALIAS("i2c:ad5602");
MODULE_ALIAS("i2c:ad5612");
MODULE_ALIAS("i2c:ad5622");
MODULE_ALIAS("of:N*T*Cti,dac7512");
MODULE_ALIAS("of:N*T*Cti,dac7512C*");
MODULE_ALIAS("spi:ad5300");
MODULE_ALIAS("spi:ad5310");
MODULE_ALIAS("spi:ad5320");
MODULE_ALIAS("spi:ad5444");
MODULE_ALIAS("spi:ad5446");
MODULE_ALIAS("spi:ad5450");
MODULE_ALIAS("spi:ad5451");
MODULE_ALIAS("spi:ad5452");
MODULE_ALIAS("spi:ad5453");
MODULE_ALIAS("spi:ad5512a");
MODULE_ALIAS("spi:ad5541a");
MODULE_ALIAS("spi:ad5542a");
MODULE_ALIAS("spi:ad5543");
MODULE_ALIAS("spi:ad5553");
MODULE_ALIAS("spi:ad5600");
MODULE_ALIAS("spi:ad5601");
MODULE_ALIAS("spi:ad5611");
MODULE_ALIAS("spi:ad5621");
MODULE_ALIAS("spi:ad5641");
MODULE_ALIAS("spi:ad5620-2500");
MODULE_ALIAS("spi:ad5620-1250");
MODULE_ALIAS("spi:ad5640-2500");
MODULE_ALIAS("spi:ad5640-1250");
MODULE_ALIAS("spi:ad5660-2500");
MODULE_ALIAS("spi:ad5660-1250");
MODULE_ALIAS("spi:ad5662");
MODULE_ALIAS("spi:dac081s101");
MODULE_ALIAS("spi:dac101s101");
MODULE_ALIAS("spi:dac121s101");
MODULE_ALIAS("spi:dac7512");
