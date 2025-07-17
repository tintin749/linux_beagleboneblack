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
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0x403eb31d, "nft_fib_validate" },
	{ 0x74a0fa1f, "nft_fib_dump" },
	{ 0xa56c50b5, "nft_fib_init" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb9ca624e, "nft_fib4_eval" },
	{ 0x57aff38c, "nft_fib4_eval_type" },
	{ 0x39f18075, "nft_fib6_eval" },
	{ 0x48c9d9bd, "nft_fib6_eval_type" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");

