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
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cinvensense,itg3200");
MODULE_ALIAS("of:N*T*Cinvensense,itg3200C*");
MODULE_ALIAS("i2c:itg3200");
