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
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0xff966963, "netdev_notice" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1bfd4a32, "usb_control_msg_recv" },
	{ 0xed85337d, "usb_control_msg_send" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x4fad61, "consume_skb" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x91452968, "_dev_err" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");
