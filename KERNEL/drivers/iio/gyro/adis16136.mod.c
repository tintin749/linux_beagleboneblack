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
	{ 0x953cc52f, "simple_attr_release" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x448b4776, "simple_open" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0x7ffed515, "adis_debugfs_reg_access" },
	{ 0x66091e67, "adis_update_scan_mode" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x4db8b9a9, "debugfs_create_file_unsafe" },
	{ 0x2bf8f1dc, "iio_get_debugfs_dentry" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdf8f705f, "__adis_initial_startup" },
	{ 0x5aed79da, "devm_adis_setup_buffer_and_trigger" },
	{ 0x95575e6d, "adis_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe1d941f2, "adis_single_conversion" },
	{ 0x9edecd8c, "__adis_read_reg" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91452968, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdbfe2e8b, "__adis_write_reg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b3190ab, "simple_attr_open" },
};

MODULE_INFO(depends, "adis_lib");

MODULE_ALIAS("spi:adis16133");
MODULE_ALIAS("spi:adis16135");
MODULE_ALIAS("spi:adis16136");
MODULE_ALIAS("spi:adis16137");
