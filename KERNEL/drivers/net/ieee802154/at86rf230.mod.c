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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x7a348e01, "gpiod_set_raw_value_cansleep" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xc37335b0, "complete" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x666e422d, "ieee802154_wake_queue" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x76d1c604, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x76de1c18, "spi_async" },
	{ 0x91452968, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");
