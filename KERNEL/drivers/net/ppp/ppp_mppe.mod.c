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
	{ 0xc419abdd, "ppp_unregister_compressor" },
	{ 0xe82f33d4, "ppp_register_compressor" },
	{ 0x5f754e5a, "memset" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd9d2e420, "crypto_alloc_shash" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ce653b9, "crypto_shash_final" },
	{ 0x19790d3c, "crypto_shash_update" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ppp_generic,libarc4");


MODULE_INFO(srcversion, "0843E154B7E41F10B0035F8");
