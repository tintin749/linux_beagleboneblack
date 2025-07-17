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
	{ 0x272732ba, "nf_ct_tmpl_alloc" },
	{ 0x24382fcc, "nf_ct_seqadj_init" },
	{ 0x4ec0bda7, "nf_ct_tmpl_free" },
	{ 0x24653fb7, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x609c64d, "security_skb_classify_flow" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x44237e70, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0x53cf024a, "ip_route_me_harder" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0x9f5c6dc2, "__cookie_v6_check" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa11201a0, "__nf_ip6_route" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xb7fe07a9, "nf_ct_extend_unregister" },
	{ 0x18428692, "__cookie_v6_init_sequence" },
	{ 0x9039b081, "nf_ct_extend_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9843f501, "__cookie_v4_check" },
	{ 0x38de8673, "ip6_local_out" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x2def1f10, "xfrm_lookup" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");

