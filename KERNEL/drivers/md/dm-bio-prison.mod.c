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
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
};

MODULE_INFO(depends, "");

