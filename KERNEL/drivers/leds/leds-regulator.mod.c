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
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x211f2f76, "regulator_is_enabled" },
	{ 0x960cd288, "regulator_count_voltages" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb7443a05, "devm_regulator_get_exclusive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x191af0d2, "regulator_set_voltage" },
	{ 0x7e7fc033, "regulator_list_voltage" },
	{ 0x91452968, "_dev_err" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

