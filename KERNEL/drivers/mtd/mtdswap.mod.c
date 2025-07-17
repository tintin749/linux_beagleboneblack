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
	{ 0x5f711fcb, "param_ops_string" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x29762e0c, "single_release" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x58db4e77, "deregister_mtd_blktrans" },
	{ 0xbd77b294, "register_mtd_blktrans" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc262a150, "add_mtd_blktrans_dev" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xc5850110, "printk" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x85df9b6c, "strsep" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x7d91edb1, "del_mtd_blktrans_dev" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd774cd88, "mtd_block_isbad" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbf5e31e6, "mtd_blktrans_cease_background" },
	{ 0xb6861ff4, "mtd_write" },
	{ 0xe8281674, "mtd_read_oob" },
	{ 0xece784c2, "rb_first" },
	{ 0x96a1a54, "mtd_write_oob" },
	{ 0x5f754e5a, "memset" },
	{ 0xb928f48c, "mtd_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3aa250c9, "mtd_erase" },
	{ 0x63ae1e08, "mtd_block_markbad" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x83d2a225, "single_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mtd_blkdevs");

