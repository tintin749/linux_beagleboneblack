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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x806f670a, "snd_soc_dapm_del_routes" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xbdd001da, "snd_soc_dapm_get_volsw" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xc3ca92ed, "snd_soc_dapm_new_controls" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0x99dae7fa, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x35ec1daf, "snd_soc_add_component_controls" },
	{ 0xccbece23, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xed22a207, "fwnode_property_read_u32_array" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x3cab4371, "devm_regulator_register_notifier" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0451674, "snd_soc_jack_report" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xa70f74f3, "regcache_cache_only" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tlv320aic310x");
MODULE_ALIAS("i2c:tlv320aic311x");
MODULE_ALIAS("i2c:tlv320aic3100");
MODULE_ALIAS("i2c:tlv320aic3110");
MODULE_ALIAS("i2c:tlv320aic3120");
MODULE_ALIAS("i2c:tlv320aic3111");
MODULE_ALIAS("i2c:tlv320dac3100");
MODULE_ALIAS("i2c:tlv320dac3101");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111C*");
MODULE_ALIAS("of:N*T*Cti,tlv320dac3100");
MODULE_ALIAS("of:N*T*Cti,tlv320dac3100C*");
MODULE_ALIAS("of:N*T*Cti,tlv320dac3101");
MODULE_ALIAS("of:N*T*Cti,tlv320dac3101C*");
