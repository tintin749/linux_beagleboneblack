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
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xa4c3d929, "of_get_next_available_child" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xc96ec9e, "of_property_read_u32_index" },
	{ 0x573b817, "of_property_read_u64_index" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xc37335b0, "complete" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x91452968, "_dev_err" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ltc2983");
MODULE_ALIAS("of:N*T*Cadi,ltc2983C*");
MODULE_ALIAS("spi:ltc2983");
