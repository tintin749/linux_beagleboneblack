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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x987e2b83, "sch56xx_watchdog_register" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x483a055b, "device_create_file" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb37b9b81, "sch56xx_read_virtual_reg16" },
	{ 0xaa17a737, "sch56xx_write_virtual_reg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1568393, "sch56xx_read_virtual_reg" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0x34257f35, "sch56xx_watchdog_unregister" },
};

MODULE_INFO(depends, "sch56xx-common");

