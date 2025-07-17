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
	{ 0xf95ee69f, "neigh_seq_next" },
	{ 0xd3a745c5, "neigh_seq_stop" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb5924e1f, "register_atm_ioctl" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x7818c4b5, "atm_charge" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x71c90087, "memcmp" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xac0af05c, "dst_release" },
	{ 0xa0a18645, "__neigh_create" },
	{ 0x89b799a6, "neigh_lookup" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xe65d065b, "vcc_insert_socket" },
	{ 0x24dd59ef, "vcc_process_recv_queue" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1fe67c67, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xc5850110, "printk" },
	{ 0x481f9e58, "neigh_update" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x945c707, "netif_schedule_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe864a95a, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb4aec65, "init_net" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf0d913c7, "__icmp_send" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xfc547b8a, "vcc_release_async" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x35226a4b, "__neigh_for_each_release" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x78a127c2, "neigh_seq_start" },
	{ 0xfe80f315, "arp_tbl" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xab6d656, "seq_putc" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x5f754e5a, "memset" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf005a6c, "neigh_direct_output" },
};

MODULE_INFO(depends, "atm");

