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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x752d9c2, "sock_diag_put_meminfo" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0x713edf85, "sock_diag_unregister" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xc98094ce, "cgrp_dfl_root" },
	{ 0xdfb32db6, "sock_diag_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x71c90087, "memcmp" },
	{ 0xf687108, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4fb6ab20, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x66e17ca8, "sock_diag_unregister_inet_compat" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x266182c9, "inet6_lookup" },
	{ 0x5cca57cc, "sock_gen_put" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x397f2781, "sock_diag_check_cookie" },
	{ 0x318031b6, "sock_diag_save_cookie" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95f2e3ed, "__inet_lookup_listener" },
	{ 0x75130a61, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1e4f2973, "bpf_sk_storage_diag_put" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x500fe26a, "sock_i_uid" },
	{ 0xec861f3f, "__netlink_dump_start" },
	{ 0x78d4403d, "netlink_net_capable" },
	{ 0xf078246a, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");

