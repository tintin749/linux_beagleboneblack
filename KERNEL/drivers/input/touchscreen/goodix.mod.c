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
	{ 0xfcec0987, "enable_irq" },
	{ 0xd28fed60, "touchscreen_report_pos" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeea0399, "strscpy" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x47c19580, "input_register_device" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x84dbd2fb, "touchscreen_parse_properties" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x254ebc4d, "devm_free_irq" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0x91452968, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("i2c:GDIX1001:00");
MODULE_ALIAS("i2c:gt911");
MODULE_ALIAS("i2c:gt9110");
MODULE_ALIAS("i2c:gt912");
MODULE_ALIAS("i2c:gt927");
MODULE_ALIAS("i2c:gt9271");
MODULE_ALIAS("i2c:gt928");
MODULE_ALIAS("i2c:gt967");
