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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x71c90087, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xeb949347, "addrconf_prefix_rcv_add_addr" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1c3177a, "addrconf_add_linklocal" },
	{ 0x79057ef, "__ndisc_fill_addr_option" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");

