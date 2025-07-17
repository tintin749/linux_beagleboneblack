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
	{ 0xeb55f21e, "fs_bio_set" },
	{ 0xf6ecda1d, "iget_failed" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x34ca961f, "sb_min_blocksize" },
	{ 0xba140f6d, "submit_bio_wait" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0x694cdcdc, "make_bad_inode" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43145f74, "page_address" },
	{ 0x5dcc5f3c, "pagecache_get_page" },
	{ 0xa6a0e51c, "get_tree_bdev" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2700e3b3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xfdff94e0, "ZSTD_initDStream" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x21835098, "bio_free_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15d433c0, "ZSTD_decompressStream" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf564db03, "__insert_inode_hash" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa95d9d52, "d_obtain_alias" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0x328a05f1, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc271e6f, "set_nlink" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x7f304b27, "ZSTD_DStreamWorkspaceBound" },
	{ 0x7b1353cb, "generic_ro_fops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x3547a901, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6347906d, "bio_put" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x87ef98d2, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6b6284e, "xz_dec_run" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x31e9ee05, "unlock_new_inode" },
	{ 0x34ced4a1, "kill_block_super" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x2df54904, "logfc" },
	{ 0xe21b3165, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x95cfbc3c, "page_get_link" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x6bbe9bc7, "d_splice_alias" },
	{ 0x5b672eb2, "sync_filesystem" },
	{ 0xc824bee6, "d_make_root" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xf30fda27, "lzo1x_decompress_safe" },
	{ 0x49970de8, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xcdc481b7, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa1b86e22, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x71fa03b5, "iget_locked" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");

