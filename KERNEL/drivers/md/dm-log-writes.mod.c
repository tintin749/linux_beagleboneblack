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
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x347c5f0e, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xdc81901a, "wait_for_completion_io" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x43145f74, "page_address" },
	{ 0xe17242bd, "submit_bio" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0xeb55f21e, "fs_bio_set" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x97255bdf, "strlen" },
	{ 0x49f26466, "kstrndup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0xc37335b0, "complete" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x6347906d, "bio_put" },
	{ 0x21835098, "bio_free_pages" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x3066972, "wake_up_process" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "dm-mod");

