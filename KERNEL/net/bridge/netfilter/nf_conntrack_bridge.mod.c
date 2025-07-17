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
	{ 0x720161b3, "nf_ct_bridge_unregister" },
	{ 0x31644917, "nf_ct_bridge_register" },
	{ 0x4fad61, "consume_skb" },
	{ 0x24f90132, "kfree_skb_list" },
	{ 0x5e71fd2d, "ip_fraglist_prepare" },
	{ 0xe9802ba0, "ip_fraglist_init" },
	{ 0x24488c8f, "skb_checksum_help" },
	{ 0x4783f661, "ip_frag_next" },
	{ 0xdd572c6, "ip_frag_init" },
	{ 0xba1e6c2, "br_ip6_fragment" },
	{ 0x5f03d5a6, "__nf_conntrack_confirm" },
	{ 0x6e4ce75c, "nf_confirm" },
	{ 0xb59aa31a, "nf_ct_deliver_cached_events" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd04e85f2, "ip_defrag" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa051cb49, "nf_conntrack_in" },
	{ 0x6467a8ee, "nf_ct_frag6_gather" },
	{ 0x7bd1b533, "br_dev_queue_push_xmit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");

