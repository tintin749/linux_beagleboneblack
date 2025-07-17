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
	{ 0xa215a72e, "xt_unregister_matches" },
	{ 0xc873d80c, "xt_register_matches" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x88479f73, "nf_defrag_ipv6_enable" },
	{ 0x1012e064, "nf_defrag_ipv4_enable" },
	{ 0x54eb7069, "nf_sk_lookup_slow_v4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5cca57cc, "sock_gen_put" },
	{ 0xd38cd100, "nf_sk_lookup_slow_v6" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv4,nf_socket_ipv6");

