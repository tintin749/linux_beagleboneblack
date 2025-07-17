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
	{ 0x91452968, "_dev_err" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x3363b534, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ac1b018, "pps_event" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdd75df6c, "pps_unregister_source" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xff689ea5, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "DC2C20835E78E639C78ED8B");
