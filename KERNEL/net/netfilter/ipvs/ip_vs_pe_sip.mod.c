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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4ba4cfab, "unregister_ip_vs_pe" },
	{ 0x94ef0db4, "register_ip_vs_pe" },
	{ 0x71c90087, "memcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xa7238935, "ct_sip_get_header" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x9d669763, "memcpy" },
	{ 0xa61c7634, "ip_vs_new_conn_out" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");

