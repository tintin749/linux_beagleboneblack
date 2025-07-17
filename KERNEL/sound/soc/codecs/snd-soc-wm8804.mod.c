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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xd2005c74, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3cab4371, "devm_regulator_register_notifier" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x64a98d5e, "snd_soc_component_test_bits" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x1c6e2c63, "snd_soc_component_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

