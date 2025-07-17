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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xdab5fc1e, "pm_runtime_force_suspend" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa62394c7, "pm_runtime_force_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x236639b4, "regulator_bulk_set_supply_names" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

