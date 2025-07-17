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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x63779770, "of_property_read_string_helper" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa561f370, "snd_soc_of_parse_card_name" },
	{ 0x850b7a30, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x96bca89a, "snd_soc_dapm_info_pin_switch" },
	{ 0xc62109c4, "snd_soc_dapm_put_pin_switch" },
	{ 0x5d14b053, "snd_soc_runtime_calc_hw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x91452968, "_dev_err" },
	{ 0xc6571cb8, "devm_get_clk_from_child" },
	{ 0xd9466b25, "snd_soc_dapm_get_pin_switch" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2b1dd2d5, "snd_soc_dai_set_sysclk" },
	{ 0xa0ab44d3, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8145cef6, "snd_soc_of_parse_audio_routing" },
	{ 0x4597e951, "snd_soc_card_jack_new" },
	{ 0x64c8821f, "snd_soc_jack_add_gpios" },
	{ 0x1264df17, "snd_soc_of_parse_daifmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1522a326, "snd_soc_dai_set_tdm_slot" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");

