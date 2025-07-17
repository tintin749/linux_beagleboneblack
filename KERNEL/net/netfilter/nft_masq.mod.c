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
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8c5c3d1b, "nft_chain_validate_hooks" },
	{ 0xdca223a9, "nft_chain_validate_dependency" },
	{ 0x2c033e41, "nf_nat_masquerade_ipv6" },
	{ 0x6b8be5e0, "nf_nat_masquerade_ipv4" },
	{ 0x5f754e5a, "memset" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5483f3db, "nft_dump_register" },
	{ 0xf687108, "nla_put" },
};

MODULE_INFO(depends, "nf_nat,nf_tables,nf_conntrack");

