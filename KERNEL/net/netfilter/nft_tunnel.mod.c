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
	{ 0x68b41d14, "nft_unregister_obj" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0xfc074f8f, "nft_register_obj" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5f754e5a, "memset" },
	{ 0xac0af05c, "dst_release" },
	{ 0xa2a73942, "nft_parse_register_store" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5483f3db, "nft_dump_register" },
	{ 0xf687108, "nla_put" },
	{ 0x65023c8c, "metadata_dst_free" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
};

MODULE_INFO(depends, "nf_tables");

