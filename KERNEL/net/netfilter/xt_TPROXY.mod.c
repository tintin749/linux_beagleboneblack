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
	{ 0x9b6dbd95, "nf_tproxy_handle_time_wait4" },
	{ 0xda2dd5c7, "nf_tproxy_laddr4" },
	{ 0xb46d1975, "nf_tproxy_get_sock_v4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbf3472d, "nf_tproxy_handle_time_wait6" },
	{ 0x89dc455d, "sock_edemux" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x5cca57cc, "sock_gen_put" },
	{ 0x5cd8e32b, "nf_tproxy_laddr6" },
	{ 0x18b7d5c7, "nf_tproxy_get_sock_v6" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0x1012e064, "nf_defrag_ipv4_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x88479f73, "nf_defrag_ipv6_enable" },
};

MODULE_INFO(depends, "nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");

