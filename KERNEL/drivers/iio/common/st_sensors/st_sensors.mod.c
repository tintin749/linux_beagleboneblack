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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9d88ebf9, "iio_trigger_using_own" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x61f90f46, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

