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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x602c360, "snd_soc_get_volsw_sx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc3ca92ed, "snd_soc_dapm_new_controls" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x39a56970, "snd_soc_info_volsw_sx" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x1c6e2c63, "snd_soc_component_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xdd1ebcd7, "snd_soc_put_volsw_sx" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xa70f74f3, "regcache_cache_only" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs42l51");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l51C*");
