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
	{ 0xa7bdfd77, "static_key_enable" },
	{ 0x1d910fc3, "cryptd_ahash_queued" },
	{ 0x22606560, "shash_ahash_digest" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x5ce653b9, "crypto_shash_final" },
	{ 0xccbdac7f, "crypto_ahash_final" },
	{ 0xe3ea5b1e, "crypto_ahash_digest" },
	{ 0x5f754e5a, "memset" },
	{ 0xeebe5ea5, "cryptd_shash_desc" },
	{ 0x9e08393d, "crypto_register_ahash" },
	{ 0xda8c1fb2, "crypto_unregister_shash" },
	{ 0x1fcad18c, "crypto_register_shash" },
	{ 0x11a9e53, "elf_hwcap2" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x229f3fa8, "crypto_unregister_ahash" },
	{ 0xb340da0b, "cryptd_ahash_child" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x9d669763, "memcpy" },
	{ 0x1e11fdfe, "crypto_ahash_setkey" },
	{ 0x3f505a79, "shash_ahash_update" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb7848c2e, "cryptd_alloc_ahash" },
	{ 0x654e4a3d, "cryptd_free_ahash" },
};

MODULE_INFO(depends, "cryptd,gf128mul");

