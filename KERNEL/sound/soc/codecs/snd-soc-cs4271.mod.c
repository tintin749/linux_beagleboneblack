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
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x816775cc, "snd_ctl_boolean_mono_info" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0x9b126258, "of_get_property" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xadf0d5d3, "devm_gpio_request" },
	{ 0xb528199c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");
