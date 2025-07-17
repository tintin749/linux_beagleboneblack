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
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3530a2aa, "device_wakeup_enable" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x4ffdb9f6, "device_set_wakeup_capable" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc37335b0, "complete" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3b46cd70, "device_wakeup_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb1b74797, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-gpadc");
MODULE_ALIAS("of:N*T*Cti,palmas-gpadcC*");
