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
	{ 0xa1f00de7, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "");

