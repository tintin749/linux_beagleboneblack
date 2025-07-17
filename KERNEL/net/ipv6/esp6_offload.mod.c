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
	{ 0x2bce6c22, "inet6_del_offload" },
	{ 0x96831720, "xfrm_unregister_type_offload" },
	{ 0xc5850110, "printk" },
	{ 0x48980553, "inet6_add_offload" },
	{ 0xe541e91d, "xfrm_register_type_offload" },
	{ 0x86eb4617, "xfrm_input" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0xd0189353, "secpath_set" },
	{ 0x33ba1be, "xfrm_parse_spi" },
	{ 0x42fa7c1d, "__skb_ext_del" },
	{ 0x785788cb, "esp6_output_tail" },
	{ 0xc6060759, "skb_ext_add" },
	{ 0x338e035d, "esp6_output_head" },
	{ 0x1627e36c, "skb_mac_gso_segment" },
	{ 0xa4e30548, "inet6_offloads" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x38280524, "esp6_input_done2" },
};

MODULE_INFO(depends, "esp6");

