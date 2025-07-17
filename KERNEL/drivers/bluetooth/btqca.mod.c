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
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x999e8297, "vfree" },
	{ 0xb720dabc, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xfb0f7183, "__hci_cmd_send" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x738c0b10, "skb_put" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "E0F990C0D1F82E997E6C919");
