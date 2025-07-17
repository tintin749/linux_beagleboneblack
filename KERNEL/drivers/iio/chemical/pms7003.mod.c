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
	{ 0x6be3caa1, "serdev_device_write_wakeup" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x91452968, "_dev_err" },
	{ 0x210bf8a5, "serdev_device_set_parity" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0x4d134644, "devm_serdev_device_open" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xae7ee0af, "serdev_device_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
	{ 0x9d669763, "memcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cplantower,pms1003");
MODULE_ALIAS("of:N*T*Cplantower,pms1003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms3003");
MODULE_ALIAS("of:N*T*Cplantower,pms3003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms5003");
MODULE_ALIAS("of:N*T*Cplantower,pms5003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms6003");
MODULE_ALIAS("of:N*T*Cplantower,pms6003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms7003");
MODULE_ALIAS("of:N*T*Cplantower,pms7003C*");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003C*");
