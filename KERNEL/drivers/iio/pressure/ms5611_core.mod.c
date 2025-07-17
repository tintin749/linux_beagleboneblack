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
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x57954143, "iio_read_const_attr" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

