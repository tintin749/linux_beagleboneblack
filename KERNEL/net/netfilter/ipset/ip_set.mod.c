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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2820969, "ns_capable" },
	{ 0x328a05f1, "strncpy" },
	{ 0xf687108, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xe864a95a, "module_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc979c35c, "nf_unregister_sockopt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xc00cd5b6, "netlink_ack" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa88c5135, "nf_register_sockopt" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xec861f3f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");

