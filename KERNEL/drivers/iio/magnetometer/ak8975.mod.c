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
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x283c0cc7, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x118c60c9, "gpiod_set_consumer_name" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x91452968, "_dev_err" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975C*");
MODULE_ALIAS("of:N*T*Cak8975");
MODULE_ALIAS("of:N*T*Cak8975C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963C*");
MODULE_ALIAS("of:N*T*Cak8963");
MODULE_ALIAS("of:N*T*Cak8963C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911C*");
MODULE_ALIAS("of:N*T*Cak09911");
MODULE_ALIAS("of:N*T*Cak09911C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912C*");
MODULE_ALIAS("of:N*T*Cak09912");
MODULE_ALIAS("of:N*T*Cak09912C*");
MODULE_ALIAS("i2c:ak8975");
MODULE_ALIAS("i2c:ak8963");
MODULE_ALIAS("i2c:AK8963");
MODULE_ALIAS("i2c:ak09911");
MODULE_ALIAS("i2c:ak09912");
MODULE_ALIAS("acpi*:AK8975:*");
MODULE_ALIAS("acpi*:AK8963:*");
MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("acpi*:AK009911:*");
MODULE_ALIAS("acpi*:AK09911:*");
MODULE_ALIAS("acpi*:AKM9911:*");
MODULE_ALIAS("acpi*:AK09912:*");
