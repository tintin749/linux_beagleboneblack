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
	{ 0xc72b088f, "crypto_cipher_encrypt_one" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xe934d9a8, "skcipher_walk_done" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd917f0f5, "crypto_cipher_decrypt_one" },
	{ 0xc5d85bd3, "skcipher_walk_virt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe533c3d, "skcipher_register_instance" },
	{ 0x60adc58a, "skcipher_alloc_instance_simple" },
};

MODULE_INFO(depends, "");

