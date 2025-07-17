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
	{ 0x8067c14d, "crypto_unregister_scomp" },
	{ 0x413cd9bf, "crypto_unregister_alg" },
	{ 0xfbf24ab3, "crypto_register_scomp" },
	{ 0x86c421cc, "crypto_register_alg" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x4f4d78c5, "LZ4_compress_default" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
};

MODULE_INFO(depends, "lz4_compress");

