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
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xa8d0033f, "nf_ct_get_tuplepr" },
	{ 0xd28b2daf, "nf_conncount_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0xbe03a217, "nf_conncount_list_init" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0x268a4802, "nf_conncount_cache_free" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcbec065, "nf_conncount_gc_list" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");

