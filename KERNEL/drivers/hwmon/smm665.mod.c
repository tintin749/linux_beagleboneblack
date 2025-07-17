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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe217956, "i2c_unregister_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:smm465");
MODULE_ALIAS("i2c:smm665");
MODULE_ALIAS("i2c:smm665c");
MODULE_ALIAS("i2c:smm764");
MODULE_ALIAS("i2c:smm766");
