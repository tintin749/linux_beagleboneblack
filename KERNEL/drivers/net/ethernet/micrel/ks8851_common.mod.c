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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x72035a73, "generic_mii_ioctl" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x870b53e9, "eeprom_93cx6_write" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x71c90087, "memcmp" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xf712f6e, "mii_check_link" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0x5ca12af0, "mii_ethtool_set_link_ksettings" },
	{ 0x63d2ff63, "eeprom_93cx6_wren" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x62f3ba5e, "of_get_mac_address" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8d7952c2, "mii_ethtool_get_link_ksettings" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x884ceb23, "mii_link_ok" },
	{ 0x4fad61, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "eeprom_93cx6");

