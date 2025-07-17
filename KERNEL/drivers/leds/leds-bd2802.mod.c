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
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x483a055b, "device_create_file" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0xe428104e, "device_remove_file" },
	{ 0xa7b3181c, "up_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb1d7438, "down_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xff689ea5, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:BD2802");
