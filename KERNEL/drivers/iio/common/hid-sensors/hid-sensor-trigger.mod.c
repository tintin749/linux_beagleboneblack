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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0xc92a9672, "hid_sensor_batch_mode_supported" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xf0ac456a, "sensor_hub_get_feature" },
	{ 0x5e588863, "sensor_hub_device_open" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xe5f44f5e, "hid_sensor_read_poll_value" },
	{ 0x12ae932a, "sensor_hub_device_close" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d1bbf27, "hid_sensor_get_usage_index" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x7acd29d7, "sensor_hub_set_feature" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0xbd2022c1, "iio_buffer_set_attrs" },
	{ 0xeb930253, "hid_sensor_set_report_latency" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x7b6cefee, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "hid-sensor-iio-common,hid-sensor-hub");

