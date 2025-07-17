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
	{ 0x8f217990, "xt_unregister_targets" },
	{ 0xcabecdf9, "xt_unregister_target" },
	{ 0x5a2b5e0b, "xt_register_targets" },
	{ 0x101c7c76, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf4271b43, "nf_ct_helper_ext_add" },
	{ 0x65572c34, "nf_conntrack_helper_try_module_get" },
	{ 0xfbf90a7d, "nf_ct_set_timeout" },
	{ 0x734e2dc, "nf_ct_l4proto_find" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
	{ 0x4ec0bda7, "nf_ct_tmpl_free" },
	{ 0x272732ba, "nf_ct_tmpl_alloc" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xd651e782, "nf_ct_destroy_timeout" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0x90f597ee, "nf_conntrack_helper_put" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nf_conntrack");

