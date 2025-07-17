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
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xbdd001da, "snd_soc_dapm_get_volsw" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xc5850110, "printk" },
	{ 0xccbece23, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0x1c6e2c63, "snd_soc_component_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb528199c, "regcache_sync" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

