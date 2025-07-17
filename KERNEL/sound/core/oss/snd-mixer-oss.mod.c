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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xa7b3181c, "up_read" },
	{ 0xccb57349, "snd_ctl_find_numid" },
	{ 0x97255bdf, "strlen" },
	{ 0x5d20f29e, "snd_card_file_remove" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xf8de3908, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x9fbedff8, "snd_ctl_notify" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe864a95a, "module_put" },
	{ 0xb3648dea, "snd_mixer_oss_notify_callback" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7625224f, "snd_card_file_add" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbc2306d7, "snd_card_ref" },
	{ 0xb79d4a1a, "snd_register_oss_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8c399d1c, "snd_ctl_find_id" },
	{ 0x1df57d42, "snd_unregister_oss_device" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1dd707be, "snd_info_register" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "snd");

