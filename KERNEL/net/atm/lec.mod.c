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
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x1fe67c67, "deregister_atm_ioctl" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xb5924e1f, "register_atm_ioctl" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xceb33e72, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x19317237, "br_fdb_test_addr_hook" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe864a95a, "module_put" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x4fad61, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xe65d065b, "vcc_insert_socket" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9d669763, "memcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xab6d656, "seq_putc" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x71c90087, "memcmp" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xfc547b8a, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "atm");

