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
	{ 0x66091e67, "adis_update_scan_mode" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xdbfe2e8b, "__adis_write_reg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe1d941f2, "adis_single_conversion" },
	{ 0x9edecd8c, "__adis_read_reg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdf8f705f, "__adis_initial_startup" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5aed79da, "devm_adis_setup_buffer_and_trigger" },
	{ 0x95575e6d, "adis_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "adis_lib");

MODULE_ALIAS("of:N*T*Cadi,adis16203");
MODULE_ALIAS("of:N*T*Cadi,adis16203C*");
