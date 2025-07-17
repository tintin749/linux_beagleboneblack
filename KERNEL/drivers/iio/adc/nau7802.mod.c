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
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xc37335b0, "complete" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnuvoton,nau7802");
MODULE_ALIAS("of:N*T*Cnuvoton,nau7802C*");
MODULE_ALIAS("i2c:nau7802");
