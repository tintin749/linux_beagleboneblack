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
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si2168");
