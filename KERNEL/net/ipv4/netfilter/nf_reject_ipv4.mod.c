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
	{ 0x24653fb7, "ip_local_out" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x5c999ed3, "nf_ct_attach" },
	{ 0xf0d913c7, "__icmp_send" },
	{ 0x2b69ab70, "nf_ip_route" },
	{ 0xa1efb173, "nf_ip_checksum" },
	{ 0x5f754e5a, "memset" },
	{ 0x53cf024a, "ip_route_me_harder" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

