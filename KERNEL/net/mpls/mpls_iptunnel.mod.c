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
	{ 0x9a619fc8, "lwtunnel_encap_del_ops" },
	{ 0xf5ef1e07, "lwtunnel_encap_add_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x27c2da75, "lwtunnel_state_alloc" },
	{ 0x7670b536, "nla_get_labels" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xea724407, "nla_put_labels" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x499ba349, "__skb_warn_lro_forwarding" },
	{ 0xfcd11d53, "neigh_xmit" },
	{ 0x90f821c1, "mpls_stats_inc_outucastpkts" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x7d93e1ff, "mpls_pkt_too_big" },
	{ 0x6199b9db, "mpls_dev_mtu" },
	{ 0xc7a90919, "mpls_output_possible" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mpls_router");

