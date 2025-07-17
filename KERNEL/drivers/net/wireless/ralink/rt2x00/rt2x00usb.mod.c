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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8e6b7831, "rt2x00lib_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4170e03e, "rt2x00lib_dmastart" },
	{ 0xa25e6a00, "rt2x00queue_flush_queue" },
	{ 0xdc3a23c3, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x8c20498e, "rt2x00queue_for_each_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6a1a5ec9, "rt2x00queue_start_queue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xf6f1b670, "rt2x00lib_remove_dev" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x9e9faffb, "rt2x00queue_get_entry" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x2c064b54, "rt2x00lib_rxdone" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9b81105b, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xf5dda364, "rt2x00lib_dmadone" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0a87736, "rt2x00lib_probe_dev" },
	{ 0x82d871a, "rt2x00queue_stop_queue" },
	{ 0x89853b35, "rt2x00lib_suspend" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "B6D6E998F10E2B42CD4BEDA");
