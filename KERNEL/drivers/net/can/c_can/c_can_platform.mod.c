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
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x7f9011f6, "register_c_can_dev" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc96ec9e, "of_property_read_u32_index" },
	{ 0xa0c3809e, "syscon_regmap_lookup_by_phandle" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x503b2824, "alloc_c_can_dev" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x75e15b64, "free_c_can_dev" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xf5e72d5, "unregister_c_can_dev" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xae5f8bc8, "c_can_power_down" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x4ec5c4a4, "c_can_power_up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");
