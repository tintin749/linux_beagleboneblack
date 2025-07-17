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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x20c53c31, "sysfs_create_bin_file" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x71c90087, "memcmp" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d669763, "memcpy" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x20f114ed, "sysfs_remove_bin_file" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

