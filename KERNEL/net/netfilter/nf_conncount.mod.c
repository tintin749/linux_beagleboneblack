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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0x5f754e5a, "memset" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0xca9360b5, "rb_next" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x930b857b, "nf_conntrack_find_get" },
	{ 0x17ddc3fc, "__do_once_done" },
};

MODULE_INFO(depends, "nf_conntrack");

