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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x1ef9af39, "devm_rc_register_device" },
	{ 0x9b126258, "of_get_property" },
	{ 0x7e64a84a, "devm_rc_allocate_device" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x5f69bad, "ir_raw_event_store_edge" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe9c616de, "cpu_latency_qos_add_request" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");
