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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x3c2e0962, "nft_reject_validate" },
	{ 0xd14a4302, "nft_reject_dump" },
	{ 0x3f2f60e5, "nft_reject_init" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x31d86851, "nf_send_unreach" },
	{ 0x71caec12, "nf_send_reset" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4");

