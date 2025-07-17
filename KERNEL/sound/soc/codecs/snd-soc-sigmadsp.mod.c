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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb9b64df, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x9fbedff8, "snd_ctl_notify" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x91452968, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd");

