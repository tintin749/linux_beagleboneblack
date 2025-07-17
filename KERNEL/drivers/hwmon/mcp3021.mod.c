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
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0x39f5802, "sysfs_remove_file_ns" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x7e1c4af9, "sysfs_create_file_ns" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp3021");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3021C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3221");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3221C*");
MODULE_ALIAS("i2c:mcp3021");
MODULE_ALIAS("i2c:mcp3221");
