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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0xb4aec65, "init_net" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x36cc4b37, "genl_notify" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x76d1c604, "ieee802154_xmit_complete" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0xb8d7022d, "__pskb_copy_fclone" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154");

