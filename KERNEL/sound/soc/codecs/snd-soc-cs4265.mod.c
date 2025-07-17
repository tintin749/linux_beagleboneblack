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
	{ 0x602c360, "snd_soc_get_volsw_sx" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xbdd001da, "snd_soc_dapm_get_volsw" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x39a56970, "snd_soc_info_volsw_sx" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0x5507aed6, "snd_soc_bytes_info" },
	{ 0xccbece23, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0xc6b6cd9, "snd_soc_bytes_get" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x695e769c, "snd_soc_bytes_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xdd1ebcd7, "snd_soc_put_volsw_sx" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");
