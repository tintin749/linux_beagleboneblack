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
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x47c19580, "input_register_device" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x410addcc, "of_property_read_variable_u16_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x695ddb78, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x9074ca97, "hwmon_device_register_with_groups" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3fe10b72, "regulator_get" },
	{ 0x84dbd2fb, "touchscreen_parse_properties" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20496c04, "input_free_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf144f336, "input_event" },
	{ 0xd28fed60, "touchscreen_report_pos" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfe990052, "gpio_free" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xc16d1aa, "regulator_put" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");
