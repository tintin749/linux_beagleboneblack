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
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0x376e7148, "iio_trigger_validate_own_device" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x607c184d, "get_device" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x5c166678, "of_irq_get_byname" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x2196324, "__aeabi_idiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mma8451");
MODULE_ALIAS("i2c:mma8452");
MODULE_ALIAS("i2c:mma8453");
MODULE_ALIAS("i2c:mma8652");
MODULE_ALIAS("i2c:mma8653");
MODULE_ALIAS("i2c:fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,mma8451");
MODULE_ALIAS("of:N*T*Cfsl,mma8451C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8452");
MODULE_ALIAS("of:N*T*Cfsl,mma8452C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8453");
MODULE_ALIAS("of:N*T*Cfsl,mma8453C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8652");
MODULE_ALIAS("of:N*T*Cfsl,mma8652C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8653");
MODULE_ALIAS("of:N*T*Cfsl,mma8653C*");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471C*");
