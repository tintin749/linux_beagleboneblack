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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xac5da070, "drop_nlink" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xc9ca3698, "register_sysctl_table" },
	{ 0x9069bb2d, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9ed9a505, "__remove_inode_hash" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43145f74, "page_address" },
	{ 0xb9f508dd, "filemap_write_and_wait_range" },
	{ 0xbc5c3e6a, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd4cfd7f, "kill_anon_super" },
	{ 0xb3e9329d, "rcuwait_wake_up" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xab0356a7, "is_bad_inode" },
	{ 0xf4c6492e, "__percpu_down_read" },
	{ 0x6825a79c, "touch_atime" },
	{ 0x37970b69, "dput" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0xf81c5432, "inc_nlink" },
	{ 0x88fe20e8, "d_find_alias" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x496313f8, "vfs_fsync" },
	{ 0x2700e3b3, "generic_read_dir" },
	{ 0xc718bd60, "super_setup_bdi" },
	{ 0x1a31f635, "mount_nodev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf564db03, "__insert_inode_hash" },
	{ 0xc8533486, "kernel_read" },
	{ 0xbc7d0fb6, "vfs_iter_write" },
	{ 0x5f754e5a, "memset" },
	{ 0x8733a550, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x93eea9e4, "from_kgid" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc271e6f, "set_nlink" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8781d48, "device_create" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xed23cf23, "unlock_page" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x1cabf74a, "shrink_dcache_sb" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7bcf8005, "fput" },
	{ 0x3547a901, "inode_nohighmem" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2e88d2b, "__task_pid_nr_ns" },
	{ 0xf2a58265, "ilookup5" },
	{ 0x87ef98d2, "inode_init_once" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x35352029, "truncate_inode_pages_final" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x2072b8b4, "unregister_sysctl_table" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x331806bf, "vfs_iter_read" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x31e9ee05, "unlock_new_inode" },
	{ 0x7ab9c548, "d_drop" },
	{ 0x37c1d620, "d_prune_aliases" },
	{ 0x15c4dd3a, "shrink_dcache_parent" },
	{ 0x2607788f, "path_put" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x53e8a1ca, "init_pid_ns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xe21b3165, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x95cfbc3c, "page_get_link" },
	{ 0x23160f6c, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x10e914b, "current_time" },
	{ 0x6bbe9bc7, "d_splice_alias" },
	{ 0x5b672eb2, "sync_filesystem" },
	{ 0x9984daee, "fget" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xc824bee6, "d_make_root" },
	{ 0xaedeee19, "task_active_pid_ns" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xcdc481b7, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa1b86e22, "new_inode" },
	{ 0x57db96ff, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbf451cca, "__class_create" },
	{ 0xe0d3761c, "clear_inode" },
	{ 0x359a0470, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb1b1489e, "clear_nlink" },
	{ 0x9a42d65c, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CF88B443E1E83C05D4D271A");
