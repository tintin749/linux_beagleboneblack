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
	{ 0x97255bdf, "strlen" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcf33b17d, "nf_ct_helper_init" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xd40d1b3d, "nf_ct_expect_init" },
	{ 0xee0219e3, "nf_conntrack_helpers_register" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x637a81e4, "nf_ct_expect_put" },
	{ 0xe7ba70e0, "nf_ct_expect_alloc" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0xe2155131, "nf_conntrack_helpers_unregister" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xede76444, "nf_ct_helper_log" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");

