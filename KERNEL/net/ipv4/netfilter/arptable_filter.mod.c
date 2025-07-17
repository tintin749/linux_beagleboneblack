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
	{ 0xb4aec65, "init_net" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xf869c413, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f2f4b25, "arpt_register_table" },
	{ 0x9820afa8, "arpt_alloc_initial_table" },
	{ 0xf8de0ec1, "arpt_do_table" },
	{ 0x27cdb7d0, "arpt_unregister_table_pre_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb7146411, "arpt_unregister_table" },
};

MODULE_INFO(depends, "arp_tables");

