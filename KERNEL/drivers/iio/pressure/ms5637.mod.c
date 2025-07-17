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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5dfe7f0, "ms_sensors_read_temp_and_pressure" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x7b972d5, "ms_sensors_tp_read_prom" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,ms5637");
MODULE_ALIAS("of:N*T*Cmeas,ms5637C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5805");
MODULE_ALIAS("of:N*T*Cmeas,ms5805C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5837");
MODULE_ALIAS("of:N*T*Cmeas,ms5837C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressure");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressureC*");
MODULE_ALIAS("i2c:ms5637");
MODULE_ALIAS("i2c:ms5805");
MODULE_ALIAS("i2c:ms5837");
MODULE_ALIAS("i2c:ms8607-temppressure");
