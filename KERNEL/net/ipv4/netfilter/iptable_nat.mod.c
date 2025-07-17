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
	{ 0x5aa21dc6, "ipt_unregister_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x569b6632, "nf_nat_ipv4_register_fn" },
	{ 0xa9e7d2, "ipt_register_table" },
	{ 0x7fd3852d, "ipt_alloc_initial_table" },
	{ 0x870756c2, "ipt_do_table" },
	{ 0x5a5e99ee, "nf_nat_ipv4_unregister_fn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0c2b99a, "ipt_unregister_table_exit" },
};

MODULE_INFO(depends, "nf_nat");

