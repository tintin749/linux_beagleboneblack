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
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x951425dc, "sk_free" },
	{ 0xfaa6c9c7, "sock_diag_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4e2c060, "__raw_v4_lookup" },
	{ 0x7488b157, "__raw_v6_lookup" },
	{ 0xd8905958, "inet_sk_diag_fill" },
	{ 0xae46c908, "inet_diag_bc_sk" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x21562a1d, "raw_v4_hashinfo" },
	{ 0x793a93dc, "raw_v6_hashinfo" },
	{ 0x78d4403d, "netlink_net_capable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "inet_diag");

