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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x89dedc93, "regmap_multi_reg_write" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x98c6b0a9, "regmap_bulk_write" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x90e042d0, "__i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:m88ds3103");
MODULE_ALIAS("i2c:m88rs6000");
MODULE_ALIAS("i2c:m88ds3103b");
