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
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc37335b0, "complete" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8974");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8974C*");
MODULE_ALIAS("of:N*T*Calps,hscdtd008a");
MODULE_ALIAS("of:N*T*Calps,hscdtd008aC*");
MODULE_ALIAS("i2c:ami305");
MODULE_ALIAS("i2c:ami306");
MODULE_ALIAS("i2c:ak8974");
MODULE_ALIAS("i2c:hscdtd008a");
