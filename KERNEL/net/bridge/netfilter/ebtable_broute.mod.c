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
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x7ad299d5, "ebt_register_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x758e1979, "ebt_do_table" },
	{ 0x3ea94702, "ebt_unregister_table_pre_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x65b53fb6, "ebt_unregister_table" },
};

MODULE_INFO(depends, "ebtables");

