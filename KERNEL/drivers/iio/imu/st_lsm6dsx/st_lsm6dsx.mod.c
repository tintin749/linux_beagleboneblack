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
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xa5d70f22, "iio_read_mount_matrix" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x2c8f517f, "iio_show_mount_matrix" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xb4416f3c, "devm_iio_kfifo_allocate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x61f90f46, "device_property_present" },
};

MODULE_INFO(depends, "");

