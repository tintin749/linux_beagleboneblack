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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe97c4103, "ioremap" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xae9849dd, "__request_region" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9918e748, "mii_check_media" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4fad61, "consume_skb" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x8d7952c2, "mii_ethtool_get_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x138569c2, "netdev_warn" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x5ca12af0, "mii_ethtool_set_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x4384eb42, "__release_region" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

