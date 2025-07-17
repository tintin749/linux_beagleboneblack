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
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x91452968, "_dev_err" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:dlhl60d");
MODULE_ALIAS("i2c:dlhl60g");
MODULE_ALIAS("of:N*T*Casc,dlhl60d");
MODULE_ALIAS("of:N*T*Casc,dlhl60dC*");
MODULE_ALIAS("of:N*T*Casc,dlhl60g");
MODULE_ALIAS("of:N*T*Casc,dlhl60gC*");
