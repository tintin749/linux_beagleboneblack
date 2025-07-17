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
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0xb4416f3c, "devm_iio_kfifo_allocate" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:sca3000_d01");
MODULE_ALIAS("spi:sca3000_e02");
MODULE_ALIAS("spi:sca3000_e04");
MODULE_ALIAS("spi:sca3000_e05");
