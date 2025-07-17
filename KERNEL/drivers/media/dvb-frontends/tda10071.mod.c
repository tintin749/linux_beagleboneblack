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
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tda10071_cx24118");
