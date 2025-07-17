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
	{ 0x5aa64b34, "inet_diag_unregister" },
	{ 0x5ca5b84e, "inet_diag_register" },
	{ 0xfaa6c9c7, "sock_diag_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x88ef8ed3, "__udp6_lib_lookup" },
	{ 0x951425dc, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x397f2781, "sock_diag_check_cookie" },
	{ 0x4155749e, "__udp4_lib_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbf4d4539, "udp_table" },
	{ 0x8ce13cc5, "udplite_table" },
	{ 0xd8905958, "inet_sk_diag_fill" },
	{ 0xae46c908, "inet_diag_bc_sk" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x78d4403d, "netlink_net_capable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "inet_diag");

