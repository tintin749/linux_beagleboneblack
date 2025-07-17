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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x822137e2, "arm_heavy_mb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccosmic,10001-adc");
MODULE_ALIAS("of:N*T*Ccosmic,10001-adcC*");
