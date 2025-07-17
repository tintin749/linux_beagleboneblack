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
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xefb4fd1a, "ax25_ip_xmit" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc6cbbc89, "capable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x9d669763, "memcpy" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x7b8dbe3c, "ax25_header_ops" },
};

MODULE_INFO(depends, "ax25");

