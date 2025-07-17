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
	{ 0xc6eeef8d, "ath6kl_core_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x821ac6a8, "ath6kl_core_cleanup" },
	{ 0x9146906a, "ath6kl_core_create" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x49cff5cf, "ath6kl_stop_txrx" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x58e2f536, "ath6kl_core_init" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9665ec8d, "ath6kl_core_rx_complete" },
	{ 0x9d669763, "memcpy" },
	{ 0xe26951eb, "ath6kl_core_tx_complete" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");
