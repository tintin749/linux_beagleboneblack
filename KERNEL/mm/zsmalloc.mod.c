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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x467a87d, "__cpuhp_remove_state" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x43145f74, "page_address" },
	{ 0xd4cfd7f, "kill_anon_super" },
	{ 0xd0a97f58, "dec_zone_page_state" },
	{ 0xeadd0ffa, "kern_unmount" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xe88b17e, "zpool_register_driver" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdcc47fd7, "init_pseudo" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3cbec7bd, "__ClearPageMovable" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x7ac1cb2b, "wait_on_page_bit" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x81f300e1, "inc_zone_page_state" },
	{ 0x9fc791a3, "__cpuhp_setup_state" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa888ac53, "kern_mount" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xfdf58216, "unregister_shrinker" },
	{ 0x2619e3f3, "zpool_unregister_driver" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe21b3165, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x64d03ddd, "register_shrinker" },
	{ 0xa53d13e5, "page_mapping" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa319330, "__SetPageMovable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8c6b0f86, "alloc_anon_inode" },
	{ 0x6bc1fa29, "__put_page" },
};

MODULE_INFO(depends, "");

