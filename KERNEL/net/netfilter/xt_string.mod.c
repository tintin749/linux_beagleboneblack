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
	{ 0xb96f998, "xt_unregister_match" },
	{ 0xd5363524, "xt_register_match" },
	{ 0x98fa8908, "skb_find_text" },
	{ 0xba0d72c3, "textsearch_prepare" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x714153ee, "textsearch_destroy" },
};

MODULE_INFO(depends, "");

