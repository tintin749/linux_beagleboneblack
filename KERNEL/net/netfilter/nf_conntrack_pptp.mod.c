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
	{ 0xcd03ac02, "nf_ct_unexpect_related" },
	{ 0x9f1548ff, "nf_conntrack_helper_register" },
	{ 0x88d5cb1a, "nf_ct_gre_keymap_add" },
	{ 0x68e88996, "nf_conntrack_helper_unregister" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xd40d1b3d, "nf_ct_expect_init" },
	{ 0x6d0c821b, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xb63194df, "nf_ct_expect_find_get" },
	{ 0x637a81e4, "nf_ct_expect_put" },
	{ 0xe7ba70e0, "nf_ct_expect_alloc" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0x154d4a8a, "nf_ct_gre_keymap_destroy" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x930b857b, "nf_conntrack_find_get" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");

