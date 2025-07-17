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
	{ 0x19741ae4, "gue_encap_hlen" },
	{ 0xff1adff3, "fou_encap_hlen" },
	{ 0x4c5f70b9, "ip6_tnl_encap_del_ops" },
	{ 0xc5850110, "printk" },
	{ 0x8f5bff69, "ip6_tnl_encap_add_ops" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x8a0f0ebb, "inet6_protos" },
	{ 0xcc9d9d14, "__fou_build_header" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8d28c621, "__gue_build_header" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x16dc7961, "udp6_set_csum" },
	{ 0xe6f8407d, "skb_push" },
};

MODULE_INFO(depends, "fou,ip6_tunnel");

