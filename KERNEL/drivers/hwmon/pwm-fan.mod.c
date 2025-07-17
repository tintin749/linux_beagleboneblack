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
	{ 0xbede776e, "dev_err_probe" },
	{ 0x2a1acf9e, "thermal_cdev_update" },
	{ 0xaed49293, "devm_thermal_of_cooling_device_register" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xcfce4d76, "platform_get_irq_optional" },
	{ 0x7cf5143b, "devm_of_pwm_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91452968, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd0e9b06a, "pwm_apply_state" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-fan");
MODULE_ALIAS("of:N*T*Cpwm-fanC*");
