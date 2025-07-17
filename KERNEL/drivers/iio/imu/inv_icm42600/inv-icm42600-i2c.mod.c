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
	{ 0x4b90c9c9, "inv_icm42600_core_probe" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xa854f84c, "inv_icm42600_regmap_config" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2ea0680c, "inv_icm42600_pm_ops" },
};

MODULE_INFO(depends, "inv-icm42600");

MODULE_ALIAS("of:N*T*Cinvensense,icm42600");
MODULE_ALIAS("of:N*T*Cinvensense,icm42600C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm42602");
MODULE_ALIAS("of:N*T*Cinvensense,icm42602C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm42605");
MODULE_ALIAS("of:N*T*Cinvensense,icm42605C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm42622");
MODULE_ALIAS("of:N*T*Cinvensense,icm42622C*");
