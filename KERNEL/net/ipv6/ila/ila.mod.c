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
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9a619fc8, "lwtunnel_encap_del_ops" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xf5ef1e07, "lwtunnel_encap_add_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0xac0af05c, "dst_release" },
	{ 0x1edea196, "dst_cache_set_ip6" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0x27c2da75, "lwtunnel_state_alloc" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0xf8a38105, "rhashtable_free_and_destroy" },
	{ 0xb5e98d3c, "rhashtable_walk_peek" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0xf687108, "nla_put" },
	{ 0xee1fc842, "dst_cache_get" },
	{ 0x9d06ac33, "free_bucket_spinlocks" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x9e3e3879, "ip6_route_output_flags" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x69e51d08, "__alloc_bucket_spinlocks" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0x3b427e6c, "inet_proto_csum_replace_by_diff" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x2def1f10, "xfrm_lookup" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x17ddc3fc, "__do_once_done" },
};

MODULE_INFO(depends, "");

