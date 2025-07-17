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
	{ 0x8733236, "intlog10" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x9d669763, "memcpy" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xc8fab2f5, "__regmap_init_i2c" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x47c2e623, "regmap_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mn88473");
