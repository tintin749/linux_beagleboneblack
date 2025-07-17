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
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0x76c2c679, "snd_pcm_hw_constraint_ratnums" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbb9b64df, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc2b46b9, "snd_ctl_boolean_stereo_info" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xdd37e2f9, "snd_pcm_hw_rule_add" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3cab4371, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xa70f74f3, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

