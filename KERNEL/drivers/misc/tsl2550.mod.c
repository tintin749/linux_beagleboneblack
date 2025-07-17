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
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctaos,tsl2550");
MODULE_ALIAS("of:N*T*Ctaos,tsl2550C*");
MODULE_ALIAS("i2c:tsl2550");

MODULE_INFO(srcversion, "B1FBCD730DEE9652D1BC43A");
