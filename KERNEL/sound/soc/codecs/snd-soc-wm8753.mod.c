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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xcf518402, "snd_soc_dapm_get_enum_double" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xbdd001da, "snd_soc_dapm_get_volsw" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd5c83e, "snd_soc_component_update_bits" },
	{ 0xd48635e2, "snd_soc_put_volsw" },
	{ 0x28aa2046, "snd_soc_get_volsw" },
	{ 0xd94f6aef, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xccbece23, "snd_soc_dapm_put_volsw" },
	{ 0x91452968, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x6e6d28a, "snd_soc_get_enum_double" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xbb5d9995, "snd_soc_component_write" },
	{ 0x7a5103b2, "snd_soc_put_enum_double" },
	{ 0x1c6e2c63, "snd_soc_component_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb528199c, "regcache_sync" },
	{ 0x1843318e, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cwlf,wm8753");
MODULE_ALIAS("of:N*T*Cwlf,wm8753C*");
MODULE_ALIAS("i2c:wm8753");
