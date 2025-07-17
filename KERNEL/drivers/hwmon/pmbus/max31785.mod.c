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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x62e8dad5, "pmbus_get_fan_rate_cached" },
	{ 0x43d487c4, "pmbus_update_fan" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb98886d4, "pmbus_get_fan_rate_device" },
	{ 0x20ffa38c, "pmbus_read_word_data" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x5d2553e0, "pmbus_set_page" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cmaxim,max31785");
MODULE_ALIAS("of:N*T*Cmaxim,max31785C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31785a");
MODULE_ALIAS("of:N*T*Cmaxim,max31785aC*");
MODULE_ALIAS("i2c:max31785");
MODULE_ALIAS("i2c:max31785a");
