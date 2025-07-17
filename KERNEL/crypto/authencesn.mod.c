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
	{ 0xda5c5bc4, "crypto_unregister_template" },
	{ 0xc1cba61f, "crypto_register_template" },
	{ 0x581c716, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0x37ae4cd3, "crypto_grab_ahash" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x1e11fdfe, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0x6a800292, "crypto_get_default_null_skcipher" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0xe3ea5b1e, "crypto_ahash_digest" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "authenc");

