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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x174051d8, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa60266c3, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x6e2f3c64, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xf687108, "nla_put" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0xcbbed733, "can_send" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xcb4e576f, "netlink_capable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfcec5906, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");

