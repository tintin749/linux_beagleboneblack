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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3fba701, "wait_for_completion_killable_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x61c04805, "gpiod_cansleep" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xb43f9365, "ktime_get" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cparallax,ping");
MODULE_ALIAS("of:N*T*Cparallax,pingC*");
MODULE_ALIAS("of:N*T*Cparallax,laserping");
MODULE_ALIAS("of:N*T*Cparallax,laserpingC*");
