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
	{ 0xf347b129, "crypto_alloc_skcipher" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xd917f0f5, "crypto_cipher_decrypt_one" },
	{ 0xfe74f581, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0xc72b088f, "crypto_cipher_encrypt_one" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xe934d9a8, "skcipher_walk_done" },
	{ 0x5f754e5a, "memset" },
	{ 0x2448baea, "crypto_register_skciphers" },
	{ 0xc5d85bd3, "skcipher_walk_virt" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x78d61beb, "crypto_cipher_setkey" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xcd7b1b31, "crypto_alloc_base" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "crypto_simd");

