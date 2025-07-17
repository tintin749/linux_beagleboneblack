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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xa4866ed5, "register_candev" },
	{ 0x9925590c, "can_rx_offload_queue_sorted" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xff966963, "netdev_notice" },
	{ 0x70351a34, "napi_disable" },
	{ 0x9a1def50, "regmap_raw_write" },
	{ 0x6f03cdaf, "alloc_can_err_skb" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x4cff8773, "can_rx_offload_get_echo_skb" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x8f88a808, "can_rx_offload_enable" },
	{ 0xfc6bdaa0, "can_bus_off" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x4dddc55c, "close_candev" },
	{ 0x76de1c18, "spi_async" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xf5382be0, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x21f8d6a5, "free_candev" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x5c26e650, "can_rx_offload_add_manual" },
	{ 0x835c1f64, "can_change_mtu" },
	{ 0x718b9aee, "can_change_state" },
	{ 0xfa31dfa1, "unregister_candev" },
	{ 0x85491e62, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x22a372e8, "devm_gpiod_put" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x69f255b6, "open_candev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0x9d669763, "memcpy" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xb13ca565, "alloc_canfd_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcc151deb, "can_put_echo_skb" },
	{ 0xcbc25274, "can_rx_offload_del" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251xfd");
