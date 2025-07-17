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
	{ 0x91452968, "_dev_err" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xaed49293, "devm_thermal_of_cooling_device_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x5cf2c8c1, "__devm_reset_control_get" },
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");
