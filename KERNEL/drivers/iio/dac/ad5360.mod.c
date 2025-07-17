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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bee2dda, "iio_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ad5360");
MODULE_ALIAS("spi:ad5361");
MODULE_ALIAS("spi:ad5362");
MODULE_ALIAS("spi:ad5363");
MODULE_ALIAS("spi:ad5370");
MODULE_ALIAS("spi:ad5371");
MODULE_ALIAS("spi:ad5372");
MODULE_ALIAS("spi:ad5373");
