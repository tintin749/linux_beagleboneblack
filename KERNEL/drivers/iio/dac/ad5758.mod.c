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
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8f8f657f, "bsearch" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x91452968, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad5758");
MODULE_ALIAS("of:N*T*Cadi,ad5758C*");
MODULE_ALIAS("spi:ad5758");
