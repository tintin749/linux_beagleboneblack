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
	{ 0x3a2f70e8, "skcipher_walk_aead_decrypt" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43145f74, "page_address" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xfffa3100, "sg_next" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xe934d9a8, "skcipher_walk_done" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x997578fd, "skcipher_walk_aead_encrypt" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x11a9e53, "elf_hwcap2" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2d4230f4, "crypto_unregister_aead" },
	{ 0xc6d12355, "crypto_register_aead" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");

