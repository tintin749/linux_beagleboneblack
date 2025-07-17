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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0xe2d84061, "regulator_register_notifier" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x2630f3ea, "regulator_unregister_notifier" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91452968, "_dev_err" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:sht10");
MODULE_ALIAS("platform:sht11");
MODULE_ALIAS("platform:sht15");
MODULE_ALIAS("platform:sht71");
MODULE_ALIAS("platform:sht75");
MODULE_ALIAS("of:N*T*Csensirion,sht15");
MODULE_ALIAS("of:N*T*Csensirion,sht15C*");
