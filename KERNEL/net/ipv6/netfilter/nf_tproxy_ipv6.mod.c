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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xbedd795d, "inet_twsk_put" },
	{ 0x7ddd7541, "inet6_lookup_listener" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0x87f1bd9b, "udp6_lib_lookup" },
	{ 0xf0b30983, "__inet6_lookup_established" },
	{ 0x951425dc, "sk_free" },
	{ 0x12d5b167, "inet_twsk_deschedule_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

