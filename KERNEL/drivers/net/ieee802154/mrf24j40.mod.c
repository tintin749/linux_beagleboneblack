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
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x73690c94, "regmap_write_async" },
	{ 0x76d1c604, "ieee802154_xmit_complete" },
	{ 0xc5850110, "printk" },
	{ 0x91452968, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x76de1c18, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");
