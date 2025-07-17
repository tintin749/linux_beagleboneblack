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
	{ 0x835c1f64, "can_change_mtu" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xcc151deb, "can_put_echo_skb" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xa4866ed5, "register_candev" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf5382be0, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x1a7d4790, "devm_clk_get_optional" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x69f255b6, "open_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4dddc55c, "close_candev" },
	{ 0xdd0ec931, "can_free_echo_skb" },
	{ 0x4fad61, "consume_skb" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xdae132dd, "can_get_echo_skb" },
	{ 0xfc6bdaa0, "can_bus_off" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x6f03cdaf, "alloc_can_err_skb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x21f8d6a5, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xfa31dfa1, "unregister_candev" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x9d669763, "memcpy" },
	{ 0x85491e62, "alloc_can_skb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0x91452968, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");
