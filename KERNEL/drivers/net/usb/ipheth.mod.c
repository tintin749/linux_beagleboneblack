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
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x669f8c58, "netif_tx_stop_all_queues" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xfdf4170c, "usb_altnum_to_altsetting" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x91452968, "_dev_err" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");
