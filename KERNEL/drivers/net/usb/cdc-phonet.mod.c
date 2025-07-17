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
	{ 0x60bc5b55, "netif_rx" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x43145f74, "page_address" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x4fad61, "consume_skb" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0x42a0deac, "cdc_parse_cdc_header" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0xdb40a71e, "phonet_header_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "phonet");

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");
