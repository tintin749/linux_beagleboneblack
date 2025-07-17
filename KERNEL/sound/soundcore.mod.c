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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc5850110, "printk" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8781d48, "device_create" },
	{ 0xe864a95a, "module_put" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbf451cca, "__class_create" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "");

