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
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xddb78cde, "pmbus_update_byte_data" },
	{ 0xc0cb885e, "pmbus_write_word_data" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x20ffa38c, "pmbus_read_word_data" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:isl68137");
MODULE_ALIAS("i2c:isl68220");
MODULE_ALIAS("i2c:isl68221");
MODULE_ALIAS("i2c:isl68222");
MODULE_ALIAS("i2c:isl68223");
MODULE_ALIAS("i2c:isl68224");
MODULE_ALIAS("i2c:isl68225");
MODULE_ALIAS("i2c:isl68226");
MODULE_ALIAS("i2c:isl68227");
MODULE_ALIAS("i2c:isl68229");
MODULE_ALIAS("i2c:isl68233");
MODULE_ALIAS("i2c:isl68239");
MODULE_ALIAS("i2c:isl69222");
MODULE_ALIAS("i2c:isl69223");
MODULE_ALIAS("i2c:isl69224");
MODULE_ALIAS("i2c:isl69225");
MODULE_ALIAS("i2c:isl69227");
MODULE_ALIAS("i2c:isl69228");
MODULE_ALIAS("i2c:isl69234");
MODULE_ALIAS("i2c:isl69236");
MODULE_ALIAS("i2c:isl69239");
MODULE_ALIAS("i2c:isl69242");
MODULE_ALIAS("i2c:isl69243");
MODULE_ALIAS("i2c:isl69247");
MODULE_ALIAS("i2c:isl69248");
MODULE_ALIAS("i2c:isl69254");
MODULE_ALIAS("i2c:isl69255");
MODULE_ALIAS("i2c:isl69256");
MODULE_ALIAS("i2c:isl69259");
MODULE_ALIAS("i2c:isl69260");
MODULE_ALIAS("i2c:isl69268");
MODULE_ALIAS("i2c:isl69269");
MODULE_ALIAS("i2c:isl69298");
MODULE_ALIAS("i2c:raa228000");
MODULE_ALIAS("i2c:raa228004");
MODULE_ALIAS("i2c:raa228006");
MODULE_ALIAS("i2c:raa228228");
MODULE_ALIAS("i2c:raa229001");
MODULE_ALIAS("i2c:raa229004");
