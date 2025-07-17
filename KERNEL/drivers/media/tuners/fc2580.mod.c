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
	{ 0x526c3a6c, "jiffies" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xeea0399, "strscpy" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:fc2580");
