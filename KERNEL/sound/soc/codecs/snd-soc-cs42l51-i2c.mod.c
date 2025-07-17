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
	{ 0xd087cf86, "cs42l51_remove" },
	{ 0x51e83372, "cs42l51_suspend" },
	{ 0x1ce6792b, "cs42l51_regmap" },
	{ 0x375ad98c, "cs42l51_of_match" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x5a9cbee7, "cs42l51_resume" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b1aefcc, "cs42l51_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "snd-soc-cs42l51");

MODULE_ALIAS("i2c:cs42l51");
