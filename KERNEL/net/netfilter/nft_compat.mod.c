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
	{ 0xca31215e, "nfnetlink_subsys_unregister" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0x8d733624, "xt_request_find_match" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xce671dd5, "xt_request_find_target" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc5850110, "printk" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xf687108, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x50992cef, "try_module_get" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xebce4e20, "xt_check_match" },
	{ 0x91e0ddea, "xt_check_target" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xe864a95a, "module_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables");

