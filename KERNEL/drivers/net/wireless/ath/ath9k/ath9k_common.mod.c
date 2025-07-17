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
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2ca0ec9b, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x520b091d, "ath_hw_keyreset" },
	{ 0x31ad985b, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "cfg80211,ath9k_hw,ath");

