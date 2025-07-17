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
	{ 0x81fed507, "release_sock" },
	{ 0x6bcf3114, "sctp_transport_lookup_process" },
	{ 0x5aa64b34, "inet_diag_unregister" },
	{ 0xab0f67d4, "inet_diag_msg_attrs_fill" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xf687108, "nla_put" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x4fb6ab20, "nla_reserve_64bit" },
	{ 0xdfd989a6, "inet_diag_msg_common_fill" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x397f2781, "sock_diag_check_cookie" },
	{ 0x318031b6, "sock_diag_save_cookie" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49839f80, "nla_reserve" },
	{ 0x5ca5b84e, "inet_diag_register" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x4a8b989b, "sctp_transport_traverse_process" },
	{ 0x38240832, "sctp_get_sctp_info" },
	{ 0xb26bbcd5, "sctp_for_each_endpoint" },
	{ 0x78d4403d, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");

