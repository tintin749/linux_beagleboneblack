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
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0xb4aec65, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xae9849dd, "__request_region" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x4fad61, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x9d669763, "memcpy" },
	{ 0xefb4fd1a, "ax25_ip_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x7b8dbe3c, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ax25");

