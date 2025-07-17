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
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xdd3a76b0, "regmap_get_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "");

