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
	{ 0xb0d87369, "regulator_disable" },
	{ 0x25e3027a, "gnss_serial_free" },
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x7d32a0be, "gnss_serial_allocate" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xd1476311, "gnss_serial_deregister" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0x11a7d028, "gnss_serial_pm_ops" },
	{ 0xe10a314e, "gnss_serial_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "gnss-serial");

MODULE_ALIAS("of:N*T*Cglobaltop,pa6h");
MODULE_ALIAS("of:N*T*Cglobaltop,pa6hC*");
