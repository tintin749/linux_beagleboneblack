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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xbe533c3d, "skcipher_register_instance" },
	{ 0x581c716, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x89709b21, "crypto_shash_alg_has_setkey" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9a9d1d61, "crypto_grab_aead" },
	{ 0xc5850110, "printk" },
	{ 0xb5855bb, "crypto_mod_put" },
	{ 0x73a1c7ec, "crypto_alg_mod_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0x3b669dd2, "crypto_shash_tfm_digest" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x78d61beb, "crypto_cipher_setkey" },
	{ 0x1eb589ff, "crypto_shash_finup" },
	{ 0x19790d3c, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0xc72b088f, "crypto_cipher_encrypt_one" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0xd9d2e420, "crypto_alloc_shash" },
	{ 0xcd7b1b31, "crypto_alloc_base" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "authenc");

