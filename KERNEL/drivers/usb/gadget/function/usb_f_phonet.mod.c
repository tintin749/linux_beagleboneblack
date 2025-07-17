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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3337b29, "usb_free_all_descriptors" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x43145f74, "page_address" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x25526bf6, "gether_get_ifname" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0xdf0dd7b, "usb_function_unregister" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xdb40a71e, "phonet_header_ops" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x78f0c107, "usb_put_function_instance" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe9e256b4, "usb_ep_autoconfig" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0x56ab0610, "config_group_init_type_name" },
	{ 0x91452968, "_dev_err" },
	{ 0xcfe420d9, "usb_function_register" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x53880fa1, "config_ep_by_speed" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0xb49854ee, "usb_assign_descriptors" },
	{ 0xd5f4f47b, "usb_interface_id" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6bc1fa29, "__put_page" },
};

MODULE_INFO(depends, "phonet");

