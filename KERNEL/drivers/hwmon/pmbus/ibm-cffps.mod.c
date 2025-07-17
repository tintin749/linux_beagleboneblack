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
	{ 0x448b4776, "simple_open" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x20ffa38c, "pmbus_read_word_data" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x5b7490f2, "pmbus_get_debugfs_dir" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x4db456fe, "i2c_smbus_read_block_data" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0x9d669763, "memcpy" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x44366cfc, "simple_write_to_buffer" },
	{ 0x5d2553e0, "pmbus_set_page" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cibm,cffps1");
MODULE_ALIAS("of:N*T*Cibm,cffps1C*");
MODULE_ALIAS("of:N*T*Cibm,cffps2");
MODULE_ALIAS("of:N*T*Cibm,cffps2C*");
MODULE_ALIAS("of:N*T*Cibm,cffps");
MODULE_ALIAS("of:N*T*Cibm,cffpsC*");
MODULE_ALIAS("i2c:ibm_cffps1");
MODULE_ALIAS("i2c:ibm_cffps2");
MODULE_ALIAS("i2c:ibm_cffps");
