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
	{ 0xea9c882a, "crypto_unregister_templates" },
	{ 0xe6afecc, "crypto_register_templates" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0xfffa3100, "sg_next" },
	{ 0x67d9e19e, "crypto_ahash_finup" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0x84b183ae, "strncmp" },
	{ 0x37ae4cd3, "crypto_grab_ahash" },
	{ 0x581c716, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9a9d1d61, "crypto_grab_aead" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2522fd96, "shash_register_instance" },
	{ 0xd747268a, "shash_free_singlespawn_instance" },
	{ 0x226ba0f1, "crypto_inst_setname" },
	{ 0xe5304024, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xee0ed69a, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xc72b088f, "crypto_cipher_encrypt_one" },
	{ 0x9d669763, "memcpy" },
	{ 0x78d61beb, "crypto_cipher_setkey" },
	{ 0x1e11fdfe, "crypto_ahash_setkey" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

