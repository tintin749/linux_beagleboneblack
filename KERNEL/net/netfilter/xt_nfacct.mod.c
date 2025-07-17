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
	{ 0xa215a72e, "xt_unregister_matches" },
	{ 0xc873d80c, "xt_register_matches" },
	{ 0x33f49442, "nfnl_acct_overquota" },
	{ 0xf0de017, "nfnl_acct_update" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2ba77e0b, "nfnl_acct_find_get" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbecf5d14, "nfnl_acct_put" },
};

MODULE_INFO(depends, "nfnetlink_acct");

