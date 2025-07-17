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
	{ 0xf9a482f9, "msleep" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x47c2e623, "regmap_exit" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x1b88f8aa, "gpiochip_remove" },
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x5f754e5a, "memset" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xc8fab2f5, "__regmap_init_i2c" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cxd2820r");
