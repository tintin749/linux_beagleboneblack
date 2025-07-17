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
	{ 0xc96ec9e, "of_property_read_u32_index" },
	{ 0x2c7be11f, "of_device_is_compatible" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0x7cc57754, "syscon_node_to_regmap" },
	{ 0xdc41a164, "dev_get_regmap" },
	{ 0x91452968, "_dev_err" },
	{ 0xd50c1d7a, "devm_regmap_field_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7308db3a, "devm_mux_chip_register" },
	{ 0xb3e70fc0, "regmap_field_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x59fb4f76, "devm_mux_chip_alloc" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cmmio-mux");
MODULE_ALIAS("of:N*T*Cmmio-muxC*");
MODULE_ALIAS("of:N*T*Creg-mux");
MODULE_ALIAS("of:N*T*Creg-muxC*");
