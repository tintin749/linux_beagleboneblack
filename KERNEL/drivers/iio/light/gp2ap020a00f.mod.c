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
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xdb25da3e, "irq_work_queue" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0x91452968, "_dev_err" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x95a57e6, "iio_push_event" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csharp,gp2ap020a00f");
MODULE_ALIAS("of:N*T*Csharp,gp2ap020a00fC*");
MODULE_ALIAS("i2c:gp2ap020a00f");
