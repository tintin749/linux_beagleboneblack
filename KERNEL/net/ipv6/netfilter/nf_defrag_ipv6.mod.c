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
	{ 0x9e0802cd, "inet_frag_kill" },
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7daf3b37, "fqdir_exit" },
	{ 0x243a6eb8, "inet_frag_find" },
	{ 0x3632dc14, "inet_frag_reasm_prepare" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x8ffb6e83, "inet_frags_fini" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4aec65, "init_net" },
	{ 0xe1f25ec7, "fqdir_init" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x3421cc94, "inet_frag_reasm_finish" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x10458581, "inet_frag_destroy" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x23b2ec70, "inet_frag_pull_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x862f7020, "inet_frags_init" },
	{ 0x7a7a64b3, "inet_frag_queue_insert" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x225a62f0, "icmp6_send" },
};

MODULE_INFO(depends, "");

