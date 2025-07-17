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
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x328a05f1, "strncpy" },
	{  0x64b3b, "nf_osf_find" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xa2a73942, "nft_parse_register_store" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5483f3db, "nft_dump_register" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8c5c3d1b, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");

