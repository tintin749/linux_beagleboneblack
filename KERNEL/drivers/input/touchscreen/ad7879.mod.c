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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x84dbd2fb, "touchscreen_parse_properties" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xf144f336, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7616fa77, "device_property_read_u8_array" },
	{ 0x91452968, "_dev_err" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf07a816b, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x61f90f46, "device_property_present" },
};

MODULE_INFO(depends, "");

