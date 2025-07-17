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
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9d669763, "memcpy" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("of:N*T*Cti,lm87");
MODULE_ALIAS("of:N*T*Cti,lm87C*");
MODULE_ALIAS("of:N*T*Cadi,adm1024");
MODULE_ALIAS("of:N*T*Cadi,adm1024C*");
MODULE_ALIAS("i2c:lm87");
MODULE_ALIAS("i2c:adm1024");
