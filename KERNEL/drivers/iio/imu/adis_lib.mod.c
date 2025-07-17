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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x30747d97, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

