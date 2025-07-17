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
	{ 0xcd0e95ea, "dapm_regulator_event" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdioo,dio2125");
MODULE_ALIAS("of:N*T*Cdioo,dio2125C*");
MODULE_ALIAS("of:N*T*Csimple-audio-amplifier");
MODULE_ALIAS("of:N*T*Csimple-audio-amplifierC*");
