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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x94d2c889, "hwmon_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:max1110");
MODULE_ALIAS("spi:max1111");
MODULE_ALIAS("spi:max1112");
MODULE_ALIAS("spi:max1113");
