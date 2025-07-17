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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x78321671, "gnss_put_device" },
	{ 0x22af65a3, "gnss_register_device" },
	{ 0x8cbc0ee, "serdev_device_close" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xbf75e2b5, "gnss_deregister_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9f8a7647, "gnss_allocate_device" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x81fd7db5, "serdev_device_wait_until_sent" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xae7ee0af, "serdev_device_write" },
	{ 0x6be3caa1, "serdev_device_write_wakeup" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4e669af8, "serdev_device_open" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0x4021aa77, "gnss_insert_raw" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "gnss");

MODULE_ALIAS("of:N*T*Cfastrax,uc430");
MODULE_ALIAS("of:N*T*Cfastrax,uc430C*");
MODULE_ALIAS("of:N*T*Clinx,r4");
MODULE_ALIAS("of:N*T*Clinx,r4C*");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0004");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0004C*");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0008i");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0008iC*");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0084i");
MODULE_ALIAS("of:N*T*Cwi2wi,w2sg0084iC*");
