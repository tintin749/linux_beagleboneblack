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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xa215a72e, "xt_unregister_matches" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xc873d80c, "xt_register_matches" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0x1b30cb84, "refcount_dec_and_mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xb1db66a, "ipv6_skip_exthdr" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x71c90087, "memcmp" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

