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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4d215ab, "stmpe_reg_read" },
	{ 0xc37335b0, "complete" },
	{ 0x8cd916aa, "stmpe_block_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x9f0c8ea7, "stmpe_disable" },
	{ 0x7e3d30be, "stmpe_reg_write" },
	{ 0x3e2195e1, "stmpe811_adc_common_init" },
	{ 0x54ef525b, "stmpe_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-adc");
MODULE_ALIAS("of:N*T*Cst,stmpe-adcC*");
