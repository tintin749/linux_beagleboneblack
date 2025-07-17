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
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x99bb8806, "memmove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

