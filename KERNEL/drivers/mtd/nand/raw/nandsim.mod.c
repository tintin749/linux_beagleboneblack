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
	{ 0xceeee77a, "param_array_ops" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xd544d84d, "param_ops_byte" },
	{ 0x63727adc, "param_ops_ulong" },
	{ 0x29762e0c, "single_release" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x4e98a50a, "nand_cleanup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf364095d, "mtd_device_unregister" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc17155ce, "mtd_device_parse_register" },
	{ 0x63ae1e08, "mtd_block_markbad" },
	{ 0x52f4a105, "nand_create_bbt" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x72e434a3, "filp_open" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb18cd823, "nand_scan_with_ids" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6c17cb0, "kernel_write" },
	{ 0xc8533486, "kernel_read" },
	{ 0x323fcab9, "write_inode_now" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x5dcc5f3c, "pagecache_get_page" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x221899b2, "filp_close" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x83d2a225, "single_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5e866d85, "prandom_bytes" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

