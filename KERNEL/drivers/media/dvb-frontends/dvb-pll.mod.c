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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xeea0399, "strscpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc5850110, "printk" },
	{ 0xa24491bf, "ida_free" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:dtt7579");
MODULE_ALIAS("i2c:dtt759x");
MODULE_ALIAS("i2c:z201");
MODULE_ALIAS("i2c:unknown_1");
MODULE_ALIAS("i2c:tua6010xs");
MODULE_ALIAS("i2c:env57h1xd5");
MODULE_ALIAS("i2c:tua6034");
MODULE_ALIAS("i2c:tda665x");
MODULE_ALIAS("i2c:tded4");
MODULE_ALIAS("i2c:tdhu2");
MODULE_ALIAS("i2c:tbmv");
MODULE_ALIAS("i2c:sd1878_tda8261");
MODULE_ALIAS("i2c:opera1");
MODULE_ALIAS("i2c:dtos403ih102a");
MODULE_ALIAS("i2c:tdtc9251dh0");
MODULE_ALIAS("i2c:tbdu18132");
MODULE_ALIAS("i2c:tbmu24112");
MODULE_ALIAS("i2c:tdee4");
MODULE_ALIAS("i2c:dtt7520x");
MODULE_ALIAS("i2c:tua6034_friio");
MODULE_ALIAS("i2c:tda665x_earthpt1");
