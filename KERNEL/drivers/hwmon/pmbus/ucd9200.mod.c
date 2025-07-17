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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
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

MODULE_ALIAS("of:N*T*Cti,cd9200");
MODULE_ALIAS("of:N*T*Cti,cd9200C*");
MODULE_ALIAS("of:N*T*Cti,cd9220");
MODULE_ALIAS("of:N*T*Cti,cd9220C*");
MODULE_ALIAS("of:N*T*Cti,cd9222");
MODULE_ALIAS("of:N*T*Cti,cd9222C*");
MODULE_ALIAS("of:N*T*Cti,cd9224");
MODULE_ALIAS("of:N*T*Cti,cd9224C*");
MODULE_ALIAS("of:N*T*Cti,cd9240");
MODULE_ALIAS("of:N*T*Cti,cd9240C*");
MODULE_ALIAS("of:N*T*Cti,cd9244");
MODULE_ALIAS("of:N*T*Cti,cd9244C*");
MODULE_ALIAS("of:N*T*Cti,cd9246");
MODULE_ALIAS("of:N*T*Cti,cd9246C*");
MODULE_ALIAS("of:N*T*Cti,cd9248");
MODULE_ALIAS("of:N*T*Cti,cd9248C*");
MODULE_ALIAS("i2c:ucd9200");
MODULE_ALIAS("i2c:ucd9220");
MODULE_ALIAS("i2c:ucd9222");
MODULE_ALIAS("i2c:ucd9224");
MODULE_ALIAS("i2c:ucd9240");
MODULE_ALIAS("i2c:ucd9244");
MODULE_ALIAS("i2c:ucd9246");
MODULE_ALIAS("i2c:ucd9248");
