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
	{ 0x8a31d213, "nfc_register_device" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x14ac27b, "nfc_dep_link_is_up" },
	{ 0xdf9aec3c, "nfc_targets_found" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x845d35a4, "nfc_tm_activated" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0x4d81635d, "nfc_set_remote_general_bytes" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4846340c, "nfc_get_local_general_bytes" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x2751688f, "nfc_tm_deactivated" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xbad79b74, "nfc_tm_data_received" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb23d09f, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbf373ab1, "nfc_unregister_device" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "nfc");


MODULE_INFO(srcversion, "4D02B652D46A8752C5A6C18");
