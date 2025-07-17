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
	{ 0x9975f654, "genphy_resume" },
	{ 0x6cc6124d, "genphy_suspend" },
	{ 0x2218e1d, "phy_drivers_unregister" },
	{ 0x31de3060, "phy_drivers_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8c1e78a0, "phy_get_internal_delay" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xf5fe6ad3, "phy_modify_mmd" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc1987ef4, "genphy_read_status" },
	{ 0xb4ee743e, "mdiobus_write" },
	{ 0x80d58a6f, "phy_write_mmd" },
	{ 0x212ae03a, "phy_read_mmd" },
	{ 0xab359dec, "mdiobus_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0x915048a3, "phy_modify" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000101000001111????");
