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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x9d88ebf9, "iio_trigger_using_own" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x5452d3e2, "pm_runtime_autosuspend_expiration" },
	{ 0x91452968, "_dev_err" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

