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
	{ 0x20ffa38c, "pmbus_read_word_data" },
	{ 0xe0d809c6, "pmbus_get_driver_info" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0x69257c1c, "devm_kmemdup" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cinfineon,xdpe12254");
MODULE_ALIAS("of:N*T*Cinfineon,xdpe12254C*");
MODULE_ALIAS("of:N*T*Cinfineon,xdpe12284");
MODULE_ALIAS("of:N*T*Cinfineon,xdpe12284C*");
MODULE_ALIAS("i2c:xdpe12254");
MODULE_ALIAS("i2c:xdpe12284");
