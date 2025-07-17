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
	{ 0x63727adc, "param_ops_ulong" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0xd7d32d70, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf2ba070, "blk_register_region" },
	{ 0xc5850110, "printk" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x6b9649b5, "page_endio" },
	{ 0x9d669763, "memcpy" },
	{ 0x43145f74, "page_address" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x5f754e5a, "memset" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xda133b69, "device_add_disk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5ccf69b8, "get_disk_and_module" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5e1713ed, "blk_queue_flag_clear" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0x8dc8661f, "blk_queue_physical_block_size" },
	{ 0xce32aef1, "blk_alloc_queue" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0xe9cbf734, "radix_tree_gang_lookup" },
	{ 0xce6003f1, "blk_cleanup_queue" },
	{ 0xf4570e18, "put_disk" },
};

MODULE_INFO(depends, "");

