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
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x221f0e54, "bio_devname" },
	{ 0x17c2670c, "md_check_recovery" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xcdb41c13, "unregister_md_personality" },
	{ 0x39c89829, "md_register_thread" },
	{ 0xe826c754, "bio_init" },
	{ 0xaeab54e2, "md_flush_request" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7021387b, "disk_stack_limits" },
	{ 0xab6d656, "seq_putc" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xadb0db41, "md_integrity_add_rdev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x5e4aff10, "bdevname" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x16537884, "md_set_array_sectors" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x65212e22, "md_wakeup_thread" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x17413e2e, "__bio_clone_fast" },
	{ 0x98935dff, "md_error" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcb2dbb58, "md_check_no_bitmap" },
	{ 0x122680c7, "md_integrity_register" },
	{ 0x7b43303, "register_md_personality" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");

