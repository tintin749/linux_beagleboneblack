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
	{ 0x91452968, "_dev_err" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x410addcc, "of_property_read_variable_u16_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb14fc46a, "find_next_clump8" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x1b88f8aa, "gpiochip_remove" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpisosr-gpio");
MODULE_ALIAS("of:N*T*Cpisosr-gpioC*");
MODULE_ALIAS("spi:pisosr-gpio");
