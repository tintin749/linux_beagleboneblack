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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xa5f9bcf6, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xaa38fb91, "nf_ct_kill_acct" },
	{ 0xac0af05c, "dst_release" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x44237e70, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31a87eec, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb15b4109, "crc32c" },
	{ 0x73e5201a, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf17522ca, "inet_proto_csum_replace16" },
	{ 0x9bcadc00, "nf_ct_iterate_destroy" },
	{ 0xa1efb173, "nf_ip_checksum" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0xc1560f77, "skb_checksum" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xbeea1ba4, "inet_select_addr" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0xa2d94e47, "nf_hook_entries_delete_raw" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x53cf024a, "ip_route_me_harder" },
	{ 0xe615a400, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa35a7090, "ipv6_dev_get_saddr" },
	{ 0xe864a95a, "module_put" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2caab872, "nf_ct_iterate_cleanup_net" },
	{ 0xc960ed91, "nf_conntrack_tuple_taken" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd419ba23, "ip6_route_me_harder" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb7fe07a9, "nf_ct_extend_unregister" },
	{ 0x4df7aefa, "nf_ct_helper_expectfn_register" },
	{ 0x9039b081, "nf_ct_extend_register" },
	{ 0x47172cbb, "__xfrm_decode_session" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6520076f, "nf_ct_helper_expectfn_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x99bb8806, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x97b409e9, "nf_ct_seqadj_set" },
	{ 0x2def1f10, "xfrm_lookup" },
	{ 0xeb31ddf3, "nf_hook_entries_insert_raw" },
	{ 0xfe784278, "nf_ip6_checksum" },
	{ 0x50992cef, "try_module_get" },
	{ 0x17ddc3fc, "__do_once_done" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");

