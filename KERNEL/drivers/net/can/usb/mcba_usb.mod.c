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
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xa4866ed5, "register_candev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xf5382be0, "alloc_candev_mqs" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x4dddc55c, "close_candev" },
	{ 0xdae132dd, "can_get_echo_skb" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xdd0ec931, "can_free_echo_skb" },
	{ 0xcc151deb, "can_put_echo_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x69f255b6, "open_candev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x9d669763, "memcpy" },
	{ 0x85491e62, "alloc_can_skb" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x21f8d6a5, "free_candev" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xfa31dfa1, "unregister_candev" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v04D8p0A30d*dc*dsc*dp*ic*isc*ip*in*");
