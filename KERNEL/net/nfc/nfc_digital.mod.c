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
	{ 0x8a31d213, "nfc_register_device" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x14ac27b, "nfc_dep_link_is_up" },
	{ 0xdf9aec3c, "nfc_targets_found" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x845d35a4, "nfc_tm_activated" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x4d81635d, "nfc_set_remote_general_bytes" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4846340c, "nfc_get_local_general_bytes" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3561afb0, "nfc_alloc_recv_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb8d7022d, "__pskb_copy_fclone" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xbad79b74, "nfc_tm_data_received" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0xb23d09f, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbf373ab1, "nfc_unregister_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
};

MODULE_INFO(depends, "nfc");

