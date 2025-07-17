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
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x12a38747, "usleep_range" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc37335b0, "complete" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sx9310");
MODULE_ALIAS("i2c:sx9311");
MODULE_ALIAS("of:N*T*Csemtech,sx9310");
MODULE_ALIAS("of:N*T*Csemtech,sx9310C*");
MODULE_ALIAS("of:N*T*Csemtech,sx9311");
MODULE_ALIAS("of:N*T*Csemtech,sx9311C*");
MODULE_ALIAS("acpi*:STH9310:*");
MODULE_ALIAS("acpi*:STH9311:*");
