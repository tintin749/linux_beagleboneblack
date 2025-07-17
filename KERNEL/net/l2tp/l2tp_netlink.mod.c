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
	{ 0xa24f23d8, "__request_module" },
	{ 0x56479a5d, "l2tp_tunnel_get_nth" },
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x6e9a8ddf, "l2tp_tunnel_get_session" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x9788172c, "l2tp_tunnel_register" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xf687108, "nla_put" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x97dba921, "l2tp_tunnel_create" },
	{ 0xf30cf33a, "l2tp_tunnel_get" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xe25a1c45, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x8cde41b4, "l2tp_session_get_by_ifname" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xc8aef1a6, "genlmsg_multicast_allns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0x253108ba, "l2tp_tunnel_delete" },
	{ 0xe6014796, "l2tp_tunnel_inc_refcount" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x497c068b, "l2tp_tunnel_dec_refcount" },
	{ 0xa793959f, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3326FBAA007165FC90EA19F");
