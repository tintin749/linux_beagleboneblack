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
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x73e5201a, "__put_net" },
	{ 0xef62963f, "rtnl_configure_link" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x19aa2d34, "rtnl_create_link" },
	{ 0x56ffa48a, "rtnl_link_get_net" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0x75a38389, "skb_clone" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

