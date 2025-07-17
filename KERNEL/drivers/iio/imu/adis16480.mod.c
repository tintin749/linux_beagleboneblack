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
	{ 0xe1d941f2, "adis_single_conversion" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4db8b9a9, "debugfs_create_file_unsafe" },
	{ 0x2bf8f1dc, "iio_get_debugfs_dentry" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x5aed79da, "devm_adis_setup_buffer_and_trigger" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x5c166678, "of_irq_get_byname" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xdf8f705f, "__adis_initial_startup" },
	{ 0x95575e6d, "adis_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x91452968, "_dev_err" },
	{ 0xdbfe2e8b, "__adis_write_reg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9edecd8c, "__adis_read_reg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "adis_lib");

MODULE_ALIAS("of:N*T*Cadi,adis16375");
MODULE_ALIAS("of:N*T*Cadi,adis16375C*");
MODULE_ALIAS("of:N*T*Cadi,adis16480");
MODULE_ALIAS("of:N*T*Cadi,adis16480C*");
MODULE_ALIAS("of:N*T*Cadi,adis16485");
MODULE_ALIAS("of:N*T*Cadi,adis16485C*");
MODULE_ALIAS("of:N*T*Cadi,adis16488");
MODULE_ALIAS("of:N*T*Cadi,adis16488C*");
MODULE_ALIAS("of:N*T*Cadi,adis16490");
MODULE_ALIAS("of:N*T*Cadi,adis16490C*");
MODULE_ALIAS("of:N*T*Cadi,adis16495-1");
MODULE_ALIAS("of:N*T*Cadi,adis16495-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16495-2");
MODULE_ALIAS("of:N*T*Cadi,adis16495-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16495-3");
MODULE_ALIAS("of:N*T*Cadi,adis16495-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16497-1");
MODULE_ALIAS("of:N*T*Cadi,adis16497-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16497-2");
MODULE_ALIAS("of:N*T*Cadi,adis16497-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16497-3");
MODULE_ALIAS("of:N*T*Cadi,adis16497-3C*");
MODULE_ALIAS("spi:adis16375");
MODULE_ALIAS("spi:adis16480");
MODULE_ALIAS("spi:adis16485");
MODULE_ALIAS("spi:adis16488");
MODULE_ALIAS("spi:adis16490");
MODULE_ALIAS("spi:adis16495-1");
MODULE_ALIAS("spi:adis16495-2");
MODULE_ALIAS("spi:adis16495-3");
MODULE_ALIAS("spi:adis16497-1");
MODULE_ALIAS("spi:adis16497-2");
MODULE_ALIAS("spi:adis16497-3");
