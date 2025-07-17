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
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x47de0dc7, "clk_unregister_mux" },
	{ 0x89601978, "of_clk_get_parent_count" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xeba77662, "__devm_regmap_init_mmio_clk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdbb00ce2, "of_clk_add_provider" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d708f99, "clk_register_mux_table" },
	{ 0x81123cd3, "devm_ioremap" },
	{ 0x7b057681, "of_clk_src_simple_get" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc8a7a1d0, "devm_of_platform_depopulate" },
	{ 0x45ee674, "of_address_to_resource" },
	{ 0x3c22a869, "of_property_match_string" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x6f00df3a, "devm_of_platform_populate" },
	{ 0x6ce1ae3a, "of_clk_del_provider" },
	{ 0x3a868581, "of_clk_parent_fill" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3356-pruss");
MODULE_ALIAS("of:N*T*Cti,am3356-prussC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0C*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1C*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss");
MODULE_ALIAS("of:N*T*Cti,am5728-prussC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss");
MODULE_ALIAS("of:N*T*Cti,k2g-prussC*");
MODULE_ALIAS("of:N*T*Cti,am654-icssg");
MODULE_ALIAS("of:N*T*Cti,am654-icssgC*");
MODULE_ALIAS("of:N*T*Cti,j721e-icssg");
MODULE_ALIAS("of:N*T*Cti,j721e-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am642-icssg");
MODULE_ALIAS("of:N*T*Cti,am642-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am625-pruss");
MODULE_ALIAS("of:N*T*Cti,am625-prussC*");
