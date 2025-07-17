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
	{ 0x177f1933, "netlink_has_listeners" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x75a38389, "skb_clone" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x20862623, "nlmsg_notify" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2609c429, "netlink_kernel_release" },
	{ 0xcb9b894c, "netlink_rcv_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xc00cd5b6, "netlink_ack" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x20a4babd, "netlink_set_err" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe2c0192f, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x50992cef, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x78d4403d, "netlink_net_capable" },
};

MODULE_INFO(depends, "");

