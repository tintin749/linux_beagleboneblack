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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xf347b129, "crypto_alloc_skcipher" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x1c5a0d2b, "cryptd_free_skcipher" },
	{ 0xfe74f581, "crypto_unregister_skciphers" },
	{ 0x18a7623, "cryptd_free_aead" },
	{ 0xd2037a0, "cryptd_skcipher_queued" },
	{ 0x2448baea, "crypto_register_skciphers" },
	{ 0x21c119ef, "crypto_unregister_skcipher" },
	{ 0xbc469966, "cryptd_aead_queued" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0x6d18f09a, "crypto_register_skcipher" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xfed0ff22, "cryptd_alloc_skcipher" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd0b8d64d, "cryptd_skcipher_child" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x2c57f2fd, "crypto_unregister_aeads" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x2cd74a1c, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdf11c1eb, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d4230f4, "crypto_unregister_aead" },
	{ 0xc6d12355, "crypto_register_aead" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcda6b12e, "cryptd_aead_child" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x729e4f68, "cryptd_alloc_aead" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");

