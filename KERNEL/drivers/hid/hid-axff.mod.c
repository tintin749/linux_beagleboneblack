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
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x91452968, "_dev_err" },
	{ 0x292a31e8, "__hid_request" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xe9d7469e, "input_ff_create_memless" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xd2e3c842, "hid_hw_close" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001A34p00000802");
MODULE_ALIAS("hid:b0003g*v00001A34p0000F705");
