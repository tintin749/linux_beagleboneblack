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
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0xf07a816b, "devm_device_add_group" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x47c19580, "input_register_device" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0x84dbd2fb, "touchscreen_parse_properties" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0xdcbc4017, "i2c_smbus_xfer" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x71c90087, "memcmp" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc37335b0, "complete" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0xd28fed60, "touchscreen_report_pos" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Celan,ekth3500");
MODULE_ALIAS("of:N*T*Celan,ekth3500C*");
MODULE_ALIAS("i2c:elants_i2c");
