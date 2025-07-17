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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x76d1c604, "ieee802154_xmit_complete" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0x666e422d, "ieee802154_wake_queue" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x91452968, "_dev_err" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xa14e6ba, "usb_get_from_anchor" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");
