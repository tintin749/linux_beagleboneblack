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
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4bfdcefa, "__memset32" },
	{ 0x7616fa77, "device_property_read_u8_array" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x5cf2c8c1, "__devm_reset_control_get" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x91452968, "_dev_err" },
	{ 0xeba77662, "__devm_regmap_init_mmio_clk" },
	{ 0x441e166e, "devm_platform_ioremap_resource_byname" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmoortec,mr75203");
MODULE_ALIAS("of:N*T*Cmoortec,mr75203C*");
