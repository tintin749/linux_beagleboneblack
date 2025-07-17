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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe65d065b, "vcc_insert_socket" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xdce6b3b4, "seq_open" },
	{ 0x1fe67c67, "deregister_atm_ioctl" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0xb5924e1f, "register_atm_ioctl" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xfc547b8a, "vcc_release_async" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xc602e74a, "softnet_data" },
	{ 0xb4aec65, "init_net" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1210fb32, "_raw_read_lock_irqsave" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x8aa0402b, "_raw_read_unlock_irqrestore" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbca3f79c, "_raw_read_unlock_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x301769fb, "seq_release" },
	{ 0x2aa7544b, "proc_create" },
	{ 0x738c0b10, "skb_put" },
	{ 0xfc31eec2, "_raw_read_lock_irq" },
};

MODULE_INFO(depends, "atm");

