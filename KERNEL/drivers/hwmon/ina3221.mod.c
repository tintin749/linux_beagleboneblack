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
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x9f4dd095, "of_device_is_available" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xd50c1d7a, "devm_regmap_field_alloc" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xce2b3af7, "regmap_field_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x91452968, "_dev_err" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb528199c, "regcache_sync" },
	{ 0xb3e70fc0, "regmap_field_update_bits_base" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x49376d8f, "regcache_mark_dirty" },
	{ 0xa70f74f3, "regcache_cache_only" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");
