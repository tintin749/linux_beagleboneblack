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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x9d669763, "memcpy" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0x91452968, "_dev_err" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad5755");
MODULE_ALIAS("of:N*T*Cadi,ad5755C*");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1C*");
MODULE_ALIAS("of:N*T*Cadi,ad5757");
MODULE_ALIAS("of:N*T*Cadi,ad5757C*");
MODULE_ALIAS("of:N*T*Cadi,ad5735");
MODULE_ALIAS("of:N*T*Cadi,ad5735C*");
MODULE_ALIAS("of:N*T*Cadi,ad5737");
MODULE_ALIAS("of:N*T*Cadi,ad5737C*");
MODULE_ALIAS("spi:ad5755");
MODULE_ALIAS("spi:ad5755-1");
MODULE_ALIAS("spi:ad5757");
MODULE_ALIAS("spi:ad5735");
MODULE_ALIAS("spi:ad5737");
