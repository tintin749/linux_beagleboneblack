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
	{ 0x1ff8a5a3, "aead_exit_geniv" },
	{ 0x3f3284e8, "aead_init_geniv" },
	{ 0x9618f6e2, "aead_geniv_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
};

MODULE_INFO(depends, "");

