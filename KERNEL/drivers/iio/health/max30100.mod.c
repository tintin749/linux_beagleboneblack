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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x91452968, "_dev_err" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0xb4416f3c, "devm_iio_kfifo_allocate" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max30100");
MODULE_ALIAS("of:N*T*Cmaxim,max30100C*");
MODULE_ALIAS("i2c:max30100");
