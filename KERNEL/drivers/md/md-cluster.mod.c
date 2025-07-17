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
	{ 0x15bafe29, "unregister_md_cluster_operations" },
	{ 0xa0ce3505, "register_md_cluster_operations" },
	{ 0x7cc22bd3, "md_update_sb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc62db02d, "md_bitmap_update_sb" },
	{ 0x8e148e92, "get_bitmap_from_slot" },
	{ 0x96fd6e59, "md_bitmap_free" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x6a941345, "md_cluster_ops" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0xcd7a71d9, "md_unregister_thread" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x17c2670c, "md_check_recovery" },
	{ 0x56e611ac, "md_bitmap_copy_from_slot" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x601c99e2, "md_bitmap_sync_with_cluster" },
	{ 0x43145f74, "page_address" },
	{ 0xe2fe13c9, "revalidate_disk_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x79585432, "md_find_rdev_nr_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3afdbb8b, "mddev_unlock" },
	{ 0x1705696, "md_reload_sb" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xc66cf9ea, "md_bitmap_resize" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x85e6ff89, "kobject_uevent_env" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x39c89829, "md_register_thread" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc37335b0, "complete" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x65212e22, "md_wakeup_thread" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647d6170, "dlm_lock" },
	{ 0x97255bdf, "strlen" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "md-mod,dlm");

