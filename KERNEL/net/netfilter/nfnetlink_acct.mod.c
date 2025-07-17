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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x97255bdf, "strlen" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf687108, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x50992cef, "try_module_get" },
	{ 0xec861f3f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");

