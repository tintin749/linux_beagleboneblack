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
	{ 0xdd2def68, "sha1_update_arm" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xebb0b4d0, "sha1_finup_arm" },
	{ 0x5f754e5a, "memset" },
	{ 0xda8c1fb2, "crypto_unregister_shash" },
	{ 0x1fcad18c, "crypto_register_shash" },
	{ 0x11a9e53, "elf_hwcap2" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "sha1-arm");

MODULE_ALIAS("cpu:type:*:feature:*0022*");
