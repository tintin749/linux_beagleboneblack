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
	{ 0xeb37101c, "audit_log_end" },
	{ 0x2e78e29d, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xf4387d7d, "nf_log_packet" },
	{ 0xf687108, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
};

MODULE_INFO(depends, "nf_tables");

