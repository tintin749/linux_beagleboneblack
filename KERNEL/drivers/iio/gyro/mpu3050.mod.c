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
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x9d88ebf9, "iio_trigger_using_own" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cinvensense,mpu3050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu3050C*");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050C*");
MODULE_ALIAS("i2c:mpu3050");
