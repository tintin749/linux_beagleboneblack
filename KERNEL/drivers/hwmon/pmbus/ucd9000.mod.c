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
	{ 0xa10877c3, "pmbus_do_remove" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x448b4776, "simple_open" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xe0d809c6, "pmbus_get_driver_info" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x5d2553e0, "pmbus_set_page" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x5b7490f2, "pmbus_get_debugfs_dir" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x4db456fe, "i2c_smbus_read_block_data" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd90320");
MODULE_ALIAS("of:N*T*Cti,ucd90320C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd90320");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");
