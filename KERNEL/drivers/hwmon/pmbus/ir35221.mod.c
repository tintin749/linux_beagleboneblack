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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x4db456fe, "i2c_smbus_read_block_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x20ffa38c, "pmbus_read_word_data" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:ir35221");
