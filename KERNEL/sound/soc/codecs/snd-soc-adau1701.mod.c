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
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xfc4972e1, "devm_sigmadsp_init_i2c" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0xb7f1834c, "sigmadsp_attach" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe78dbdaa, "sigmadsp_reset" },
	{ 0x88d5ef0f, "sigmadsp_setup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xa0114204, "sigmadsp_restrict_params" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x7a348e01, "gpiod_set_raw_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");
