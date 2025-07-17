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
	{ 0x5a5e99ee, "nf_nat_ipv4_unregister_fn" },
	{ 0x569b6632, "nf_nat_ipv4_register_fn" },
	{ 0x9d12bb4e, "nf_nat_ipv6_unregister_fn" },
	{ 0xb84dadf2, "nf_nat_ipv6_register_fn" },
	{ 0x92b07607, "nft_unregister_chain_type" },
	{ 0x849730a2, "nft_register_chain_type" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x33e47f4b, "nft_do_chain" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0xb270bcfc, "nf_nat_inet_register_fn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6921bc0f, "nf_nat_inet_unregister_fn" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");

