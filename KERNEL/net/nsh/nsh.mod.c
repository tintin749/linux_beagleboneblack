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
	{ 0x855bfe3a, "dev_add_offload" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xe57c8ef2, "dev_remove_offload" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x1627e36c, "skb_mac_gso_segment" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");

