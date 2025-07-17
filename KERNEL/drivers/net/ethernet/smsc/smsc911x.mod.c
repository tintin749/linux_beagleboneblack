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
	{ 0x89dde31e, "phy_ethtool_set_link_ksettings" },
	{ 0x6e1280e6, "phy_ethtool_get_link_ksettings" },
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xc880ed2d, "phy_ethtool_nway_reset" },
	{ 0xd163716a, "phy_do_ioctl_running" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c095632, "phy_support_asym_pause" },
	{ 0x88178d4b, "phy_set_max_speed" },
	{ 0xdb29f6d, "phy_attached_info" },
	{ 0xa914367f, "phy_connect_direct" },
	{ 0xbda0b013, "phy_find_first" },
	{ 0x7b069ae7, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xc5850110, "printk" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xacfb0630, "__mdiobus_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9f55be0a, "mdiobus_alloc_size" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xd007a55d, "device_get_mac_address" },
	{ 0xae78b639, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x5827c056, "clk_get" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x6f12af19, "regulator_bulk_get" },
	{ 0xe97c4103, "ioremap" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xae9849dd, "__request_region" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x40193871, "netif_receive_skb" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0xca3a2170, "skb_tstamp_tx" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x208ac5ce, "skb_clone_tx_timestamp" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb4ee743e, "mdiobus_write" },
	{ 0xab359dec, "mdiobus_read" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xf72afe1b, "phy_disconnect" },
	{ 0xecbee01b, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x70351a34, "napi_disable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x9b5c693c, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x4384eb42, "__release_region" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0xc769aab2, "mdiobus_free" },
	{ 0x198560d3, "mdiobus_unregister" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ARMH9118:*");
MODULE_ALIAS("of:N*T*Csmsc,lan9115");
MODULE_ALIAS("of:N*T*Csmsc,lan9115C*");

MODULE_INFO(srcversion, "CEDC965A4DDB53BB2F69B17");
