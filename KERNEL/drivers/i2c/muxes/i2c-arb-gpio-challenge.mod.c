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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xf70192e2, "of_get_i2c_adapter_by_node" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x1954f1aa, "devm_gpiod_get_index" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0x91452968, "_dev_err" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x159bc1e2, "i2c_put_adapter" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ci2c-arb-gpio-challenge");
MODULE_ALIAS("of:N*T*Ci2c-arb-gpio-challengeC*");
