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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x47c2e623, "regmap_exit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xeea0399, "strscpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x69fc903a, "i2c_new_client_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc8fab2f5, "__regmap_init_i2c" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0fa51fc, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ts2020");
MODULE_ALIAS("i2c:ts2022");
