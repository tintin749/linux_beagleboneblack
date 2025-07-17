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
	{ 0x3f84a86d, "devm_snd_soc_register_card" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x1059774c, "of_phandle_iterator_init" },
	{ 0xafb5800, "snd_soc_pm_ops" },
	{ 0x2c7d6b61, "asoc_simple_parse_widgets" },
	{ 0x4fed2dde, "asoc_simple_startup" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x88dce9f4, "of_graph_get_port_parent" },
	{ 0x8ea2e30d, "asoc_simple_canonicalize_cpu" },
	{ 0x4a14f5a3, "asoc_simple_init_priv" },
	{ 0x309e38f9, "asoc_simple_be_hw_params_fixup" },
	{ 0xb7af413a, "of_graph_get_next_endpoint" },
	{ 0x3dc5bdc1, "asoc_simple_parse_daifmt" },
	{ 0x95c6c289, "asoc_simple_parse_routing" },
	{ 0x91452968, "_dev_err" },
	{ 0xc8f430a0, "asoc_simple_canonicalize_platform" },
	{ 0x6723e646, "of_graph_get_endpoint_count" },
	{ 0xba6b5e43, "asoc_simple_parse_card_name" },
	{ 0x89a2feaa, "snd_soc_dai_link_set_capabilities" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0x9b126258, "of_get_property" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8bdd3660, "asoc_simple_init_jack" },
	{ 0xa6dc41b5, "snd_soc_of_parse_node_prefix" },
	{ 0x512b6a8c, "asoc_simple_dai_init" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xf7fdf5ef, "snd_soc_get_dai_id" },
	{ 0x1248957f, "of_phandle_iterator_next" },
	{ 0xd0ef60aa, "of_get_parent" },
	{ 0x9841e7e6, "of_graph_parse_endpoint" },
	{ 0xf81212e, "snd_soc_get_dai_name" },
	{ 0xb114aec2, "asoc_simple_shutdown" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xc47e4893, "asoc_simple_clean_reference" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1d0cbf5e, "asoc_simple_set_dailink_name" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xaf9e55f6, "asoc_simple_hw_params" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x98a92f71, "asoc_simple_parse_clk" },
	{ 0xa146db89, "snd_soc_of_parse_tdm_slot" },
	{ 0xd704b6f8, "of_graph_get_remote_endpoint" },
	{ 0x8d0d5c9d, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");
