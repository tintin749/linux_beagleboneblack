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
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x29b85828, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x98b3ea, "irq_of_parse_and_map" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xc37335b0, "complete" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x3fba701, "wait_for_completion_killable_timeout" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:maxbotix-mb1202");
MODULE_ALIAS("i2c:maxbotix-mb1212");
MODULE_ALIAS("i2c:maxbotix-mb1222");
MODULE_ALIAS("i2c:maxbotix-mb1232");
MODULE_ALIAS("i2c:maxbotix-mb1242");
MODULE_ALIAS("i2c:maxbotix-mb7040");
MODULE_ALIAS("i2c:maxbotix-mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137C*");
