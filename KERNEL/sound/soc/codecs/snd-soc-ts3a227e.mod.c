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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x3f095cdc, "snd_jack_set_key" },
	{ 0x91452968, "_dev_err" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0451674, "snd_soc_jack_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd,snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,ts3a227e");
MODULE_ALIAS("of:N*T*Cti,ts3a227eC*");
MODULE_ALIAS("i2c:ts3a227e");
