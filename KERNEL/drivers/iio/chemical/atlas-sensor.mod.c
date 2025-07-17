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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0xdb25da3e, "irq_work_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Catlas,ph-sm");
MODULE_ALIAS("of:N*T*Catlas,ph-smC*");
MODULE_ALIAS("of:N*T*Catlas,ec-sm");
MODULE_ALIAS("of:N*T*Catlas,ec-smC*");
MODULE_ALIAS("of:N*T*Catlas,orp-sm");
MODULE_ALIAS("of:N*T*Catlas,orp-smC*");
MODULE_ALIAS("of:N*T*Catlas,do-sm");
MODULE_ALIAS("of:N*T*Catlas,do-smC*");
MODULE_ALIAS("of:N*T*Catlas,rtd-sm");
MODULE_ALIAS("of:N*T*Catlas,rtd-smC*");
MODULE_ALIAS("i2c:atlas-ph-sm");
MODULE_ALIAS("i2c:atlas-ec-sm");
MODULE_ALIAS("i2c:atlas-orp-sm");
MODULE_ALIAS("i2c:atlas-do-sm");
MODULE_ALIAS("i2c:atlas-rtd-sm");
