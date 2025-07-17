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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x3066972, "wake_up_process" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x5a742e56, "crc8" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c5a8f02, "kthread_stop" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("i2c:sgp30");
MODULE_ALIAS("i2c:sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgp30");
MODULE_ALIAS("of:N*T*Csensirion,sgp30C*");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3C*");
