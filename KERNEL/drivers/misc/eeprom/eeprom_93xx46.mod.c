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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x483a055b, "device_create_file" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xea8d5fa9, "devm_nvmem_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe428104e, "device_remove_file" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeprom-93xx46");
MODULE_ALIAS("of:N*T*Ceeprom-93xx46C*");
MODULE_ALIAS("of:N*T*Catmel,at93c46d");
MODULE_ALIAS("of:N*T*Catmel,at93c46dC*");
MODULE_ALIAS("of:N*T*Cmicrochip,93lc46b");
MODULE_ALIAS("of:N*T*Cmicrochip,93lc46bC*");
