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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0x87f1bd9b, "udp6_lib_lookup" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x266182c9, "inet6_lookup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

