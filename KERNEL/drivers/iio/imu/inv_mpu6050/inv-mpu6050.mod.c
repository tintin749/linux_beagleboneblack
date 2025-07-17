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
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0x97255bdf, "strlen" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xb9c87be9, "regmap_noinc_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xdd3a76b0, "regmap_get_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

