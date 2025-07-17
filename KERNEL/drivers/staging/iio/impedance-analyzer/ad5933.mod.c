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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0xb4416f3c, "devm_iio_kfifo_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad5933");
MODULE_ALIAS("of:N*T*Cadi,ad5933C*");
MODULE_ALIAS("of:N*T*Cadi,ad5934");
MODULE_ALIAS("of:N*T*Cadi,ad5934C*");
MODULE_ALIAS("i2c:ad5933");
MODULE_ALIAS("i2c:ad5934");
