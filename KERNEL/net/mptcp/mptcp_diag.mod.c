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
	{ 0x20cbccf3, "mptcp_token_iter_next" },
	{ 0xae46c908, "inet_diag_bc_sk" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x951425dc, "sk_free" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xd8905958, "inet_sk_diag_fill" },
	{ 0x78d4403d, "netlink_net_capable" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xcc0179b3, "mptcp_token_get_sock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x81fed507, "release_sock" },
	{ 0xd5507fe1, "lock_sock_fast" },
};

MODULE_INFO(depends, "inet_diag");

