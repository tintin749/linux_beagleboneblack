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
	{ 0xa9e7d2, "ipt_register_table" },
	{ 0x7fd3852d, "ipt_alloc_initial_table" },
	{ 0x53cf024a, "ip_route_me_harder" },
	{ 0x870756c2, "ipt_do_table" },
	{ 0xc4c6cec7, "ipt_unregister_table_pre_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0c2b99a, "ipt_unregister_table_exit" },
};

MODULE_INFO(depends, "");

