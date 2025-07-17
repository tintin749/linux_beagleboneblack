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
	{ 0xae9849dd, "__request_region" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xfb6b0e10, "watchdog_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x2673b447, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4384eb42, "__release_region" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xfe4e4f12, "watchdog_register_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbe1b2621, "platform_device_put" },
};

MODULE_INFO(depends, "");

