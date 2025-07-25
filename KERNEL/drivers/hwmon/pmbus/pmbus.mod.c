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
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x2ef78f38, "pmbus_clear_faults" },
	{ 0x5d2553e0, "pmbus_set_page" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0xef935728, "pmbus_check_word_register" },
	{ 0x8bcd1aa9, "pmbus_check_byte_register" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:dps460");
MODULE_ALIAS("i2c:dps650ab");
MODULE_ALIAS("i2c:dps800");
MODULE_ALIAS("i2c:max20796");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:sgd009");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps544b20");
MODULE_ALIAS("i2c:tps544b25");
MODULE_ALIAS("i2c:tps544c20");
MODULE_ALIAS("i2c:tps544c25");
MODULE_ALIAS("i2c:udt020");
