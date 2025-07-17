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
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd1051560, "rtl_deinit_deferred_work" },
	{ 0x525dcf58, "rtl_deinit_core" },
	{ 0xa14e6ba, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc8dfbec, "rtl_init_core" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf102434c, "rtl_action_proc" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0xa92b1dea, "rtl_init_rx_config" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x2c8277dd, "ieee80211_tx_status_irqsafe" },
	{ 0x255b542, "rtl_ops" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd80f765f, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3ffa78a6, "rtl_beacon_statistic" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");

