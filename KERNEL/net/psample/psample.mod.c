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
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf687108, "nla_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x738c0b10, "skb_put" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

