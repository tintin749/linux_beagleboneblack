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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x45e0bd34, "rt2x00usb_resume" },
	{ 0x2c8e40a0, "rt2x00usb_suspend" },
	{ 0xcb56f3b1, "rt2x00usb_disconnect" },
	{ 0x8d0ad0a, "rt2x00mac_tx_frames_pending" },
	{ 0xe5223a34, "rt2x00mac_get_ringparam" },
	{ 0xfd2474b7, "rt2x00mac_get_antenna" },
	{ 0xf14e35af, "rt2x00mac_set_antenna" },
	{ 0xcf43f22f, "rt2x00mac_flush" },
	{ 0x30846e8, "rt2x00mac_rfkill_poll" },
	{ 0x941d08c2, "rt2x00mac_conf_tx" },
	{ 0x8877664c, "rt2x00mac_get_stats" },
	{ 0x9055fbfd, "rt2x00mac_sw_scan_complete" },
	{ 0x73086c55, "rt2x00mac_sw_scan_start" },
	{ 0x3341c332, "rt2x00mac_set_key" },
	{ 0xfb983b1c, "rt2x00mac_set_tim" },
	{ 0xcf1782ea, "rt2x00mac_configure_filter" },
	{ 0xe11bcee6, "rt2x00mac_bss_info_changed" },
	{ 0x8a79eb48, "rt2x00mac_config" },
	{ 0x62d69e59, "rt2x00mac_remove_interface" },
	{ 0xde5879f1, "rt2x00mac_add_interface" },
	{ 0x265750e5, "rt2x00mac_stop" },
	{ 0x2a7da843, "rt2x00mac_start" },
	{ 0xfb92d893, "rt2x00mac_tx" },
	{ 0x9a9acc6b, "rt2x00usb_flush_queue" },
	{ 0xdec2baa9, "rt2x00usb_kick_queue" },
	{ 0xc2d8ffae, "rt2x00usb_watchdog" },
	{ 0x54d0ce0, "rt2x00usb_clear_entry" },
	{ 0xd40b48b9, "rt2x00usb_uninitialize" },
	{ 0x72198b11, "rt2x00usb_initialize" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xfc19bae4, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb41216b0, "rt2x00lib_set_mac_address" },
	{ 0x6a5c9874, "rt2x00usb_vendor_request" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd3d0f55c, "rt2x00usb_vendor_request_buff" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf7afef62, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x4fad61, "consume_skb" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0x573fa1f2, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "44E9645CFD5AE03559C08D4");
