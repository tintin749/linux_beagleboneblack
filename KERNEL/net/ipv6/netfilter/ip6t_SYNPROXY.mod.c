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
	{ 0xcabecdf9, "xt_unregister_target" },
	{ 0x101c7c76, "xt_register_target" },
	{ 0xe647c30b, "nf_synproxy_ipv6_init" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0xdb5ce864, "nf_synproxy_ipv6_fini" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x6988f936, "synproxy_send_client_synack_ipv6" },
	{ 0x4fad61, "consume_skb" },
	{ 0x71918d4d, "synproxy_recv_client_ack_ipv6" },
	{ 0xbc90e85f, "synproxy_parse_options" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xfe784278, "nf_ip6_checksum" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9fc082, "synproxy_net_id" },
};

MODULE_INFO(depends, "nf_synproxy_core,nf_conntrack");

