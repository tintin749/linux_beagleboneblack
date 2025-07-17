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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("spi:ad7280a");
