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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xe9819f98, "snd_soc_dapm_mixer_update_power" },
	{ 0x22dbd77b, "regmap_register_patch" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xbdd001da, "snd_soc_dapm_get_volsw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xc3ca92ed, "snd_soc_dapm_new_controls" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xd2005c74, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x99dae7fa, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x35ec1daf, "snd_soc_add_component_controls" },
	{ 0xccbece23, "snd_soc_dapm_put_volsw" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x3cab4371, "devm_regulator_register_notifier" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0xfe990052, "gpio_free" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x64a98d5e, "snd_soc_component_test_bits" },
	{ 0x1c6e2c63, "snd_soc_component_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xa70f74f3, "regcache_cache_only" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104C*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("i2c:tlv320aic3104");
