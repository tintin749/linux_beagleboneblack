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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9c9d7df8, "nci_unregister_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xb49dc8bd, "nfc_fw_download_done" },
	{ 0x9d669763, "memcpy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd8a8c7fe, "nci_register_device" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x123904d8, "nci_allocate_device" },
	{ 0xaeaa6c4d, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nci,nfc");

