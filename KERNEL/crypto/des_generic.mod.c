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
	{ 0x318ef58e, "crypto_unregister_algs" },
	{ 0x8611696f, "crypto_register_algs" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x105b595, "des_encrypt" },
	{ 0xa6aa9857, "des_decrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0xa77b3b62, "des3_ede_expand_key" },
	{ 0x856a5ef3, "des3_ede_encrypt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x574eda34, "des3_ede_decrypt" },
};

MODULE_INFO(depends, "");

