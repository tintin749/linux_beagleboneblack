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
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x5bfbd964, "ad5686_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe718818b, "ad5686_remove" },
};

MODULE_INFO(depends, "ad5686");

MODULE_ALIAS("i2c:ad5311r");
MODULE_ALIAS("i2c:ad5671r");
MODULE_ALIAS("i2c:ad5675r");
MODULE_ALIAS("i2c:ad5691r");
MODULE_ALIAS("i2c:ad5692r");
MODULE_ALIAS("i2c:ad5693");
MODULE_ALIAS("i2c:ad5693r");
MODULE_ALIAS("i2c:ad5694");
MODULE_ALIAS("i2c:ad5694r");
MODULE_ALIAS("i2c:ad5695r");
MODULE_ALIAS("i2c:ad5696");
MODULE_ALIAS("i2c:ad5696r");
