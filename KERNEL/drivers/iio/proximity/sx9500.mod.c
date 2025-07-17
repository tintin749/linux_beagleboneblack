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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc37335b0, "complete" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sx9500");
MODULE_ALIAS("of:N*T*Csemtech,sx9500");
MODULE_ALIAS("of:N*T*Csemtech,sx9500C*");
MODULE_ALIAS("acpi*:SSX9500:*");
MODULE_ALIAS("acpi*:SASX9500:*");
