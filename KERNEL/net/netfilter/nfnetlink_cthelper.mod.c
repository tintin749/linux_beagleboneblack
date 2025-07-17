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
	{ 0xc5850110, "printk" },
	{ 0xfc4fbf2d, "nfnetlink_subsys_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f1548ff, "nf_conntrack_helper_register" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xec861f3f, "__netlink_dump_start" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x693c3961, "nf_ct_helper_hash" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc40f284c, "nf_ct_helper_hsize" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x97255bdf, "strlen" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x68e88996, "nf_conntrack_helper_unregister" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf687108, "nla_put" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");

