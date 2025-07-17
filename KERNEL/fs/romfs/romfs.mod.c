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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43145f74, "page_address" },
	{ 0xa6a0e51c, "get_tree_bdev" },
	{ 0xec5789fe, "page_symlink_inode_operations" },
	{ 0x2700e3b3, "generic_read_dir" },
	{ 0x5f754e5a, "memset" },
	{ 0x8a28ffd9, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xb928f48c, "mtd_read" },
	{ 0x71c90087, "memcmp" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271e6f, "set_nlink" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0xdd27fa87, "memchr" },
	{ 0x7b1353cb, "generic_ro_fops" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x3547a901, "inode_nohighmem" },
	{ 0x4c8d0511, "__brelse" },
	{ 0x87ef98d2, "inode_init_once" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe4e1ef1, "kill_mtd_super" },
	{ 0x31e9ee05, "unlock_new_inode" },
	{ 0x34ced4a1, "kill_block_super" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x2df54904, "logfc" },
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
	{ 0xc7dbb31f, "get_tree_mtd" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe69159f3, "kmap_high" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x71fa03b5, "iget_locked" },
};

MODULE_INFO(depends, "");

