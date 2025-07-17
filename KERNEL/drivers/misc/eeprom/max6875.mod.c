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
	{ 0x20c53c31, "sysfs_create_bin_file" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x91452968, "_dev_err" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x9d669763, "memcpy" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x20f114ed, "sysfs_remove_bin_file" },
	{ 0xbe217956, "i2c_unregister_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max6875");
