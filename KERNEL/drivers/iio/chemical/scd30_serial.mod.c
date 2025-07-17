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
	{ 0xbc559ae6, "scd30_resume" },
	{ 0x7e7a472f, "scd30_suspend" },
	{ 0x6be3caa1, "serdev_device_write_wakeup" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x71c90087, "memcmp" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xae7ee0af, "serdev_device_write" },
	{ 0xf102732a, "crc16" },
	{ 0xa5195bf1, "scd30_probe" },
	{ 0x480488cb, "fwnode_irq_get" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0x210bf8a5, "serdev_device_set_parity" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0x4d134644, "devm_serdev_device_open" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
	{ 0x9d669763, "memcpy" },
};

MODULE_INFO(depends, "scd30_core");

MODULE_ALIAS("of:N*T*Csensirion,scd30");
MODULE_ALIAS("of:N*T*Csensirion,scd30C*");
