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
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91452968, "_dev_err" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Camstaos,tsl2560");
MODULE_ALIAS("of:N*T*Camstaos,tsl2560C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563C*");
MODULE_ALIAS("i2c:tsl2560");
MODULE_ALIAS("i2c:tsl2561");
MODULE_ALIAS("i2c:tsl2562");
MODULE_ALIAS("i2c:tsl2563");
