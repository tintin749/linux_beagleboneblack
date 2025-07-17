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
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5a742e56, "crc8" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x314b20c8, "scnprintf" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("of:N*T*Csensirion,shtc1");
MODULE_ALIAS("of:N*T*Csensirion,shtc1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtw1");
MODULE_ALIAS("of:N*T*Csensirion,shtw1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtc3");
MODULE_ALIAS("of:N*T*Csensirion,shtc3C*");
MODULE_ALIAS("i2c:sht3x");
MODULE_ALIAS("i2c:sts3x");
