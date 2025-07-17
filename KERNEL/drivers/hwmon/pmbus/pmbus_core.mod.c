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
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0xbf0cc18f, "devm_krealloc" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x328a05f1, "strncpy" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0x91452968, "_dev_err" },
	{ 0x953e6eb4, "rdev_get_id" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f7a298c, "rdev_get_dev" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x5f9ccfb0, "devm_regulator_register" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0x6b3190ab, "simple_attr_open" },
};

MODULE_INFO(depends, "");

