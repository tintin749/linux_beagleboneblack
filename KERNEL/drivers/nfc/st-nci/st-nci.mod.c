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
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3e93ef20, "nci_req_complete" },
	{ 0xde114156, "nci_hci_set_param" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x788629c1, "nci_hci_dev_session_init" },
	{ 0xf3dc74aa, "nci_recv_frame" },
	{ 0xb4696a36, "nfc_vendor_cmd_reply" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x1e20423b, "nci_hci_send_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1ac3ccd4, "nfc_se_connectivity" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x16698444, "nci_hci_clear_all_pipes" },
	{ 0xbcb8fb16, "nci_hci_send_event" },
	{ 0x98ab2d84, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x9c9d7df8, "nci_unregister_device" },
	{ 0x62aae57a, "nci_nfcc_loopback" },
	{ 0xc5850110, "printk" },
	{ 0xffe30965, "nci_core_conn_create" },
	{ 0xaae4e392, "nci_prop_cmd" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xf687108, "nla_put" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8e7853, "nci_hci_connect_gate" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xc447b6cd, "nfc_se_transaction" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x4b75756b, "nci_hci_get_param" },
	{ 0xb7badbf7, "nci_nfcee_mode_set" },
	{ 0x95a63575, "nfc_remove_se" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xd2f2394, "nfc_add_se" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcb84c565, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd8a8c7fe, "nci_register_device" },
	{ 0x123904d8, "nci_allocate_device" },
	{ 0xaeaa6c4d, "nci_free_device" },
};

MODULE_INFO(depends, "nci,nfc");

