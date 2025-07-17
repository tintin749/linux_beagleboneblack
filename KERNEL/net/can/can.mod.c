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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x682d5afa, "_proc_mkdir" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x62e4a358, "proc_create_net_single" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xab6d656, "seq_putc" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x951425dc, "sk_free" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe864a95a, "module_put" },
	{ 0x86cb1e85, "proto_register" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x65c57ee7, "sock_register" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "");

