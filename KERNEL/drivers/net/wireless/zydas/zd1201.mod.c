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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xe0d9832d, "wireless_send_event" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x97255bdf, "strlen" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0F4C830E7414048DCEBA315");
