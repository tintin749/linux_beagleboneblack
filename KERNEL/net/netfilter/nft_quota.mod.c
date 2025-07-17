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
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x68b41d14, "nft_unregister_obj" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xfc074f8f, "nft_register_obj" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x406eb80e, "nft_obj_notify" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf687108, "nla_put" },
	{ 0xee22163, "nla_put_64bit" },
};

MODULE_INFO(depends, "nf_tables");

