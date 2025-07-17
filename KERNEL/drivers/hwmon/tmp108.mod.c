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
	{ 0x91452968, "_dev_err" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tmp108");
MODULE_ALIAS("of:N*T*Cti,tmp108C*");
MODULE_ALIAS("i2c:tmp108");
