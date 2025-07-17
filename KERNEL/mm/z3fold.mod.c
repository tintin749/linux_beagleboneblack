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
	{ 0xd4cfd7f, "kill_anon_super" },
	{ 0x2619e3f3, "zpool_unregister_driver" },
	{ 0xeadd0ffa, "kern_unmount" },
	{ 0xe88b17e, "zpool_register_driver" },
	{ 0xa888ac53, "kern_mount" },
	{ 0x99bb8806, "memmove" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0xa319330, "__SetPageMovable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa53d13e5, "page_mapping" },
	{ 0x9d669763, "memcpy" },
	{ 0x43145f74, "page_address" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc5850110, "printk" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0xeed4650b, "__lock_page" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x3cbec7bd, "__ClearPageMovable" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x8c6b0f86, "alloc_anon_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xdcc47fd7, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe21b3165, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

