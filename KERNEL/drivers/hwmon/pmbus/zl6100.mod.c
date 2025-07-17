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
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0xa10877c3, "pmbus_do_remove" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x20ffa38c, "pmbus_read_word_data" },
	{ 0xc0cb885e, "pmbus_write_word_data" },
	{ 0x6ce48ccb, "pmbus_clear_cache" },
	{ 0xc96de16a, "pmbus_read_byte_data" },
	{ 0xd58ce62d, "pmbus_write_byte" },
	{ 0xe0d809c6, "pmbus_get_driver_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x4db456fe, "i2c_smbus_read_block_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");
