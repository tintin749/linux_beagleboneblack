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
	{ 0xb3e70fc0, "regmap_field_update_bits_base" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x3bf98b58, "devm_iio_trigger_alloc" },
	{ 0x89dedc93, "regmap_multi_reg_write" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xd50c1d7a, "devm_regmap_field_alloc" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x20ce344a, "iio_format_value" },
	{ 0xce2b3af7, "regmap_field_read" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:afe4404");
MODULE_ALIAS("of:N*T*Cti,afe4404");
MODULE_ALIAS("of:N*T*Cti,afe4404C*");
