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
	{ 0x57954143, "iio_read_const_attr" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0xb4416f3c, "devm_iio_kfifo_allocate" },
	{ 0x91452968, "_dev_err" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3066972, "wake_up_process" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7ae2f5ef, "__put_task_struct" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x20ce344a, "iio_format_value" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x13153372, "iio_get_time_ns" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");
