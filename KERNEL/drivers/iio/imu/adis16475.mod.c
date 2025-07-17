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
	{ 0x448b4776, "simple_open" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x7ffed515, "adis_debugfs_reg_access" },
	{ 0x66091e67, "adis_update_scan_mode" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xe1d941f2, "adis_single_conversion" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x4db8b9a9, "debugfs_create_file_unsafe" },
	{ 0x2bf8f1dc, "iio_get_debugfs_dentry" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x5aed79da, "devm_adis_setup_buffer_and_trigger" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xdf8f705f, "__adis_initial_startup" },
	{ 0x95575e6d, "adis_init" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x83941c03, "__adis_update_bits_base" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdbfe2e8b, "__adis_write_reg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9edecd8c, "__adis_read_reg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "adis_lib");

MODULE_ALIAS("of:N*T*Cadi,adis16470");
MODULE_ALIAS("of:N*T*Cadi,adis16470C*");
MODULE_ALIAS("of:N*T*Cadi,adis16475-1");
MODULE_ALIAS("of:N*T*Cadi,adis16475-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16475-2");
MODULE_ALIAS("of:N*T*Cadi,adis16475-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16475-3");
MODULE_ALIAS("of:N*T*Cadi,adis16475-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16477-1");
MODULE_ALIAS("of:N*T*Cadi,adis16477-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16477-2");
MODULE_ALIAS("of:N*T*Cadi,adis16477-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16477-3");
MODULE_ALIAS("of:N*T*Cadi,adis16477-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16465-1");
MODULE_ALIAS("of:N*T*Cadi,adis16465-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16465-2");
MODULE_ALIAS("of:N*T*Cadi,adis16465-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16465-3");
MODULE_ALIAS("of:N*T*Cadi,adis16465-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16467-1");
MODULE_ALIAS("of:N*T*Cadi,adis16467-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16467-2");
MODULE_ALIAS("of:N*T*Cadi,adis16467-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16467-3");
MODULE_ALIAS("of:N*T*Cadi,adis16467-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16500");
MODULE_ALIAS("of:N*T*Cadi,adis16500C*");
MODULE_ALIAS("of:N*T*Cadi,adis16505-1");
MODULE_ALIAS("of:N*T*Cadi,adis16505-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16505-2");
MODULE_ALIAS("of:N*T*Cadi,adis16505-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16505-3");
MODULE_ALIAS("of:N*T*Cadi,adis16505-3C*");
MODULE_ALIAS("of:N*T*Cadi,adis16507-1");
MODULE_ALIAS("of:N*T*Cadi,adis16507-1C*");
MODULE_ALIAS("of:N*T*Cadi,adis16507-2");
MODULE_ALIAS("of:N*T*Cadi,adis16507-2C*");
MODULE_ALIAS("of:N*T*Cadi,adis16507-3");
MODULE_ALIAS("of:N*T*Cadi,adis16507-3C*");
