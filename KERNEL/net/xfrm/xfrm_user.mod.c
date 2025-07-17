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
	{ 0x36d0dd1d, "xfrm_state_walk" },
	{ 0x687d67e0, "xfrm_state_delete" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x21f81345, "xfrm_find_acq_byseq" },
	{ 0x177f1933, "netlink_has_listeners" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xbe8cfe09, "xfrm_policy_insert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4bca1fd5, "xfrm_state_update" },
	{ 0x4366fa2e, "km_policy_notify" },
	{ 0xab75abbc, "xfrm_state_lookup_byaddr" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf0462e50, "xfrm_policy_hash_rebuild" },
	{ 0x53ef6705, "xfrm_policy_walk" },
	{ 0xebdb645b, "km_state_expired" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x89b3bf35, "xfrm_state_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf0167a00, "xfrm_migrate" },
	{ 0x8e513b75, "xfrm_policy_delete" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xb353f1b0, "xfrm_policy_flush" },
	{ 0xe14eb4ef, "xfrm_audit_state_add" },
	{ 0x9259c205, "xfrm_sad_getinfo" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x83d38b0a, "xfrm_policy_walk_done" },
	{ 0x2609c429, "netlink_kernel_release" },
	{ 0x13141841, "__xfrm_state_delete" },
	{ 0xcb9b894c, "netlink_rcv_skb" },
	{ 0x328a05f1, "strncpy" },
	{ 0xf687108, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x4b2ec925, "km_state_notify" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0x2526bbc2, "xfrm_register_km" },
	{ 0xd20ead1c, "km_query" },
	{ 0xb4aec65, "init_net" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xfb539681, "xfrm_alloc_spi" },
	{ 0x4cd30ca2, "km_policy_expired" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x720fc741, "__xfrm_init_state" },
	{ 0x8f151e5d, "xfrm_state_flush" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x6e141d63, "xfrm_unregister_km" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x58297491, "xfrm_policy_destroy" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x7d2e29fb, "xfrm_dev_state_add" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0xf7424ffe, "xfrm_audit_policy_delete" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0x52457edd, "xfrm_policy_bysel_ctx" },
	{ 0x1f734c4f, "xfrm_policy_alloc" },
	{ 0x2fc1d9da, "xfrm_audit_state_delete" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe2c0192f, "__netlink_kernel_create" },
	{ 0xc1530a0b, "xfrm_state_add" },
	{ 0xa32ca06a, "xfrm_audit_policy_add" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8750fa3, "xfrm_init_replay" },
	{ 0x975eddc1, "__fib6_flush_trees" },
	{ 0x7e181b46, "xfrm_policy_byid" },
	{ 0x1e4fa3fc, "xfrm_find_acq" },
	{ 0xff4403d4, "xfrm_state_walk_done" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x59e02fcd, "xfrm_state_alloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0xec861f3f, "__netlink_dump_start" },
	{ 0xe914e41e, "strcpy" },
	{ 0x91d66438, "xfrm_spd_getinfo" },
	{ 0x78d4403d, "netlink_net_capable" },
};

MODULE_INFO(depends, "xfrm_algo");

