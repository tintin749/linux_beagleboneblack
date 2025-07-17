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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x58db4e77, "deregister_mtd_blktrans" },
	{ 0xbd77b294, "register_mtd_blktrans" },
	{ 0xc262a150, "add_mtd_blktrans_dev" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xb928f48c, "mtd_read" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb6861ff4, "mtd_write" },
	{ 0x3aa250c9, "mtd_erase" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x7d91edb1, "del_mtd_blktrans_dev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mtd_blkdevs");

