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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xf0ef52e8, "down" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x581cde4e, "up" },
	{ 0xaea39c1f, "dm_dirty_log_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dm-log");

