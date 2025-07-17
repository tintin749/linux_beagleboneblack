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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xe428104e, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x483a055b, "device_create_file" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9074ff70, "sysfs_notify" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

