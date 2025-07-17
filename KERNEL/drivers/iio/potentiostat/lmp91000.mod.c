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
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0x61f90f46, "device_property_present" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x9825aff9, "iio_channel_cb_get_channels" },
	{ 0x6ea94167, "iio_channel_get_all_cb" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xba4a7d6c, "iio_trigger_set_immutable" },
	{ 0x26d12cd7, "iio_channel_cb_get_iio_dev" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x959fb4af, "iio_convert_raw_to_processed" },
	{ 0x546f50a6, "iio_read_channel_scale" },
	{ 0x5ecfe356, "iio_read_channel_offset" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
};

MODULE_INFO(depends, "industrialio-buffer-cb");

MODULE_ALIAS("i2c:lmp91000");
MODULE_ALIAS("i2c:lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91000");
MODULE_ALIAS("of:N*T*Cti,lmp91000C*");
MODULE_ALIAS("of:N*T*Cti,lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91002C*");
