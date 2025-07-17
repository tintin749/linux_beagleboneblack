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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc8789b73, "unix_table_lock" },
	{ 0x752d9c2, "sock_diag_put_meminfo" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0x713edf85, "sock_diag_unregister" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xdfb32db6, "sock_diag_register" },
	{ 0xf687108, "nla_put" },
	{ 0x89d20c8, "unix_peer_get" },
	{ 0x951425dc, "sk_free" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86eacf77, "unix_inq_len" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x397f2781, "sock_diag_check_cookie" },
	{ 0x81725f04, "unix_outq_len" },
	{ 0x318031b6, "sock_diag_save_cookie" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49839f80, "nla_reserve" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x500fe26a, "sock_i_uid" },
	{ 0xec861f3f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");

