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
	{ 0xf6ecda1d, "iget_failed" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x34ca961f, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xac4b90b, "unload_nls" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43145f74, "page_address" },
	{ 0xbc5c3e6a, "iget5_locked" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x5dcc5f3c, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x892f991b, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x1c4d793b, "mpage_readahead" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x309ed2df, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xec5789fe, "page_symlink_inode_operations" },
	{ 0x2700e3b3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xe07fee0a, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd99129b5, "from_kgid_munged" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x5f754e5a, "memset" },
	{ 0x95853a1e, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8a28ffd9, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xa95d9d52, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xedce385e, "cdrom_multisession" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271e6f, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcb38ee1c, "__wait_on_buffer" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0xdd27fa87, "memchr" },
	{ 0x7b1353cb, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x3547a901, "inode_nohighmem" },
	{ 0x4c8d0511, "__brelse" },
	{ 0x9213f6f1, "cdrom_read_tocentry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x87ef98d2, "inode_init_once" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x5e69fa58, "load_nls" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x31e9ee05, "unlock_new_inode" },
	{ 0x34ced4a1, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe21b3165, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6bbe9bc7, "d_splice_alias" },
	{ 0x5b672eb2, "sync_filesystem" },
	{ 0xf5f35263, "sb_set_blocksize" },
	{ 0xc824bee6, "d_make_root" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xcdc481b7, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe69159f3, "kmap_high" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0xc8c3dc34, "generic_block_bmap" },
};

MODULE_INFO(depends, "cdrom");

