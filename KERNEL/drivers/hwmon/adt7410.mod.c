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
	{ 0x99843512, "adt7x10_dev_pm_ops" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8172861, "adt7x10_remove" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcc37f8c7, "adt7x10_probe" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");
