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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8e1a1619, "ath10k_core_unregister" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe210b36a, "ath10k_core_register" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4afbd6c5, "ath10k_core_destroy" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x13a7612d, "ath10k_core_create" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x6768c794, "ath10k_htc_process_trailer" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1eb72acc, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7c8d369, "ath10k_htc_notify_tx_completion" },
	{ 0x738c0b10, "skb_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("usb:v13B1p0042d*dc*dsc*dp*ic*isc*ip*in*");
