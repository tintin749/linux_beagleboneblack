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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x98b3ea, "irq_of_parse_and_map" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x471114d1, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cad,gpio-adnp");
MODULE_ALIAS("of:N*T*Cad,gpio-adnpC*");
MODULE_ALIAS("i2c:gpio-adnp");
