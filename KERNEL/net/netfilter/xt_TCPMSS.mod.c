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
	{ 0x8f217990, "xt_unregister_targets" },
	{ 0x5a2b5e0b, "xt_register_targets" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac0af05c, "dst_release" },
	{ 0x10c68ddd, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x99bb8806, "memmove" },
	{ 0x738c0b10, "skb_put" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x44237e70, "inet_proto_csum_replace4" },
	{ 0xff890c49, "skb_ensure_writable" },
};

MODULE_INFO(depends, "");

