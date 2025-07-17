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
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0xf57ec95a, "cdc_ncm_change_mtu" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfa240a67, "in6_dev_finish_destroy" },
	{ 0x28908645, "__vlan_find_dev_deep_rcu" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xfe9ba3e2, "cdc_ncm_rx_verify_ndp16" },
	{ 0x82a9ee57, "ipv6_stub" },
	{ 0x22569075, "cdc_ncm_rx_verify_nth16" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3914b42f, "cdc_ncm_fill_tx_frame" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xff7bf253, "usb_match_id" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x20fd5c12, "usb_cdc_wdm_register" },
	{ 0xa0dfd3fc, "cdc_ncm_bind_common" },
	{ 0x2a6fb24f, "cdc_ncm_select_altsetting" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0x98c3bbf, "cdc_ncm_unbind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
